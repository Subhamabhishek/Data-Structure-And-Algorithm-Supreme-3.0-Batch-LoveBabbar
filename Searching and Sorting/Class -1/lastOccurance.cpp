 #include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

void findLastOccurance(int arr[], int n, int target, int &ans){

    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2; //taki ye integer range ke andar rahe

    while(s<=e){
        if(arr[mid] == target){
                //ans found --> may or may not be FO
                //store and compute ----> By reference 
            ans = mid;
                // will move to right as we are talking about F>O
            s=mid+1;
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
    int arr[]= {10,20,20,20,20,20,24,30,40,50,60};
    int n=11;
    int target=20;
    int ans= -1;

    findLastOccurance(arr, n, target, ans);
    cout<<"first Occ Index: "<<ans<<endl;

    return 0;
}


// while(s<=e){
//             if(mid+1 < n && arr[mid+1]-arr[mid] != 1) //mid+1 < n taki mid range mein ayega
//                 return arr[mid]+1;
//             if(mid-1 >n && arr[mid]-arr[mid-1] != 1) //jab left mein jao check mid-1 >n taki mid range mein aye
//                 return arr[mid]-1;
//             if(arr[mid] - mid == 0)
//             //right mein jayega cuzz index and number same hai
//                 s=mid+1;
//             if(arr[mid]-mid != 0)
//             //left mein jao
//                 e=mid-1;
//             //bhul jate hein
//             mid=s+(e-s)/2;   
//         }
//         return -1;