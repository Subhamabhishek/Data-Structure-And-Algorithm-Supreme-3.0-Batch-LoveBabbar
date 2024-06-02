#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>

using namespace std;

int main(){
    vector<int>arr(8);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=70;
    arr[4]=60;
    arr[5]=50;
    arr[6]=40;
    arr[7]=35;

/////USING BINARY SEARCH//

    // int n = arr.size();
    // int s=0;
    // int e=n-1;
    // int mid=s+(e-s)/2;

    //     while(s<e){
    //         if(arr[mid]<arr[mid+1]){
    //             //move right
    //             s=mid+1;
    //         }
    //         else{
    //             //ya toh main line B pr hun
    //             //ya toh main ans pr hun
    //             e=mid;
    //         }
    //         mid = s+(e-s)/2;
    //     }
    //     cout<<"peak index is: "<<mid<<endl;

//by STORE AND COMPUTE/////

    int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
    /////using store and compute //////
        int ansIndex=-1;
        while(s<=e){
            if(arr[mid]<arr[mid+1]){
                //move right
                s=mid+1;
            }
            else{
                //may or may not be
                ansIndex=mid;
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }
        cout<<"peak index is: "<< ansIndex;
    return 0;
    
}