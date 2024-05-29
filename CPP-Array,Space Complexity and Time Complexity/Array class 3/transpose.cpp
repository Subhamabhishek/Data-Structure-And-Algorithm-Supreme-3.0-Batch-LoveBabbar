#include<iostream>
#include<algorithm>
using namespace std;

void transposeMatrix(int arr[][3], int rowsize, int colsize){
    
//1:- NOMAL METHOD 

    // int ans[100][100]={0};

    // for(int i=0; i<rowsize; i++){
    //     for (int j=0; j<colsize; j++){
    //         ans[i][j]=arr[j][i];
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<rowsize; i++){
    //     for (int j=0; j<colsize; j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//2:- SWAP METHOD
    for(int i=0; i<rowsize; i++){
        for (int j=0; j<colsize; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout<<" printing the transpose"<<endl;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
    
}

int main(){

    int arr[3][3]={
            {10,15,20},
            {30,35,40},
            {50,55,60}
        };
    int rowsize=3;
    int colsize=3;

    transposeMatrix(arr, rowsize, colsize);
   



    return 0;
}