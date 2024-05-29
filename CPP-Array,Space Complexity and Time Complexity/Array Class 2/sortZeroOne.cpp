#include<iostream>
#include<algorithm>
using namespace std;

void sortZeroOne(int arr[], int n){
    //count
    int zerocount=0, onecount=0;

    for(int i=0; i<n; i++){
        if(arr[i]==0)
         zerocount++;

        if(arr[i]==1)
        onecount++;
        
    }

    // //insertion
    // for(int i=0; i<zerocount; i++)
    //     arr[i]=0;
    // for(int i=zerocount;i<n; i++)
    //     arr[i]=1;
    
        // OR   //

//insertion using fill 
    fill(arr, arr+zerocount, 0);
    fill(arr+zerocount,arr+n, 1);
}

int main(){
    int arr[]={0,1,0,1,0,0,0,1,1,0};
    int size =10;

    // sortZeroOne(arr,size);

    sort(arr,arr+size);  ///giving result in O(NlogN) with using sort- not by sortZeroOne function 
//printing array
    for(int i=0; i<size; i++){
         cout<<arr[i]<<" ";
    }

    return 0;

} 