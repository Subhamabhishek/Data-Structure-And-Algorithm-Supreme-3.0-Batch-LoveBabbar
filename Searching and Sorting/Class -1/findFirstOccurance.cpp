 #include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

void findFirstOccurance(int arr[], int n, int target, int &ans){

    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2; //taki ye integer range ke andar rahe

    while(s<=e){
        if(arr[mid] == target){
                //ans found --> may or may not be FO
                //store and compute ----> By reference 
            ans = mid;
                // will move to left as we are talking about F>O
            e=mid-1;
        }
        if(target > arr[mid]){
            //right mein jao
            s= mid + 1;
        }
            
        if(target < arr[mid]){
            //else mein jaoo
            e= mid - 1;
        }
            
    //ye mein bhul jata hun
        mid= s+ (e-s)/2;
        

    }
               

}

int main(){
    int arr[]= {20,20,20,20,20,20,20,30,40,50,60};
    int n=11;
    int target=20;
    int ans= -1;

    findFirstOccurance(arr, n, target, ans);
    cout<<"first Occ Index: "<<ans<<endl;

    return 0;
}