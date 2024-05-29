#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr1[5] ={1,3,5,7,9};
    int arr2[5]= {0,2,4,6,8};

    int temp;

    for(int i=0; i<5; i++){
        temp = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }

    for(int i=0; i<5; i++ ){
        cout<<"elements in array1 " << arr1[i]<<endl;
        cout<<"elements in arr2 "<<arr2[i]<<endl;
    }
    return 0;
}