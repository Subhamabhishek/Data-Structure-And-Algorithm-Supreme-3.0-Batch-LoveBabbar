#include<iostream>
using namespace std;

int main(){
//1-- declaring 2D array;
    // int arr[4][3];

//2-- initializing
        int arr[3][3]={
            {10,15,20},
            {30,35,40},
            {50,55,60}
        };
        // cout<<arr[2][1]<<endl;


//3-- traversing the array
        int rowsize=3;
        int colsize=3;

    //row-WISE//
        // for(int i=0;i<rowsize; i++){
        //     for(int j=0; j<colsize; j++){
        //             cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;     //////////IMPORTANT//////////////
        // }

    //col-WISE//
        // for(int j=0;j<colsize; j++){
        //     for(int i=0; i<rowsize; i++){
        //             cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;     //////////IMPORTANT//////////////
        // }

    //square matrix//
        // for(int i=0;i<rowsize; i++){
        //     for(int j=0; j<colsize; j++){
        //             cout<<arr[j][i]<<" ";
        //     }
        //     cout<<endl;     //////////IMPORTANT//////////////
        // }
    
    //diagonal-WISE//
        // for(int i=0;i<rowsize; i++){
        //     for(int j=0; j<colsize; j++){
        //             if(i==j)
        //                 cout<<arr[j][i]<<" ";
        //     }
        //     cout<<endl;     //////////IMPORTANT//////////////
        // }

        

// //H.W // //     //opposite diagnal
        for(int i=0; i<rowsize; i++){
            for(int j=0; j<colsize; j++){
                if(i+j == rowsize-1 ){
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        } 

    return 0;
}