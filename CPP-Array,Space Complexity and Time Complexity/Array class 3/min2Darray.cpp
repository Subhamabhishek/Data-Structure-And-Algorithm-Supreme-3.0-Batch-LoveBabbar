#include<iostream>
#include<algorithm>
using namespace std;

int findmin2Darray(int arr[][3], int rowsize, int colsize){

    int minValue= INT8_MAX;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            minValue= min(arr[i][j],minValue);
        }
    }
    return minValue;
}
int main(){

    int arr[3][3]={
            {10,15,20},
            {30,35,40},
            {-2,55,60}
        };
    int rowsize=3;
    int colsize=3;

    int ans= findmin2Darray(arr,rowsize, colsize);
    cout<<ans<<endl;



    return 0;
}