#include<iostream>
#include<algorithm>
using namespace std;

int printRowSum(int arr[][4], int rowsize, int colsize){
    
    for(int i=0; i<rowsize; i++){
        int sum=0;
        for (int j=0; j<colsize; j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    
}

int main(){

    int arr[3][4]={
            {10,15,20,100},
            {30,35,40,200},
            {50,55,60,300}
        };
    int rowsize=3;
    int colsize=4;

    printRowSum( arr, rowsize, colsize);
   



    return 0;
}