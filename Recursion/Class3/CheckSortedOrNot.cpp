#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n, int index){
    if(index == n-1) return true;

    bool currAns = false;
    bool recurAns = false;
    //ek case ham solve karenge
    if(arr[index+1] > arr[index])
        currAns = true;
    recurAns = checkSorted(arr,n, index+1);

    if(currAns == true && recurAns == true){
        return true;
    }
    else 
        return false;    
    
}

int main(){
    int arr[]={10,20,30,90,50,60};
    int n= 6;
    int index=0;
    bool ans = checkSorted(arr,n, index);
    cout<<ans;
    return 0;
}