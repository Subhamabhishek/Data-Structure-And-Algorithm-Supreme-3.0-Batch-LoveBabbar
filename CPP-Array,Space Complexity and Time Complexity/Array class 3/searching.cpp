#include<iostream>

using namespace std;

bool searchArray(int arr[][4], int rowsize, int colsize, int target){
        for (int i=0; i<rowsize; i++){
            for (int j=0; j<colsize; j++){
                if (arr[i][j] == target)
                    return true;
            }
        }

        return false; // ass taget not found
}

int main(){

    int arr[3][4]= {
        {10,11,12,13},
        {20,21,22,23},
        {31,33,4,50}

    };

    int rowsize=3;
    int colsize=4;
    int target=44;

    bool ans= searchArray(arr,rowsize,colsize,target);

    cout<<"ans is: "<< ans <<endl;


    return 0;
}