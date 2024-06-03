#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


void rotateArray(vector<int>arr, int n, int k){
    k=k%n;

//1. reverse all

    reverse(arr.begin(), arr.end()); //[start_add, end_add+1]

 //2.reverse first k

    reverse(arr.begin(), arr.begin()+k);

  //3. reverse first n-k

    reverse(arr.begin()+ k, arr.end());    

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }       
}
    
    


int main(){

   vector<int>arr;

   cout<<"size of array: ";
    int n;
    cin>>n;

    cout<<"enter data of array: ";
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        arr.push_back(d);
    }

    cout<<"provide how many times you want to rotate : ";
    int k;
    cin>> k;
    
    cout<<"K rotation result: ";
    rotateArray(arr, n, k);
    
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<endl;
    // }

    return 0;
}