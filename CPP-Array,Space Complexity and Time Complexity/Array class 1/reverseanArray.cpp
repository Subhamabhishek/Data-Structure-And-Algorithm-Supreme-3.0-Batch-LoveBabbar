#include<iostream>
#include<algorithm>
using namespace std;

// 1:- using two pointer approach
// void reverseArray(int arr[],int n){
//     int l=0;
//     int h=n-1;

//     // while(l<h){
//     //     swap(arr[l], arr[h]);
//     //     l++;
//     //     h--;
//     // }

// ////////pro coding method
//     while(l<h)
//         swap(arr[l++],arr[h--]);
// }

int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]); //size of array
    
// M1:- custom reversal using 2 pointer approach
//     reverseArray(arr,n);

// M2:- STL,C++ lib 
reverse(arr, arr+n);

    for(int i=0; i<n;i++)
        cout<<arr[i]<<endl;

    return 0;

}