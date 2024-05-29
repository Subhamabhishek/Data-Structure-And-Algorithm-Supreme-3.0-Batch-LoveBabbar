#include<iostream>
#include<algorithm>
using namespace std;

// bool twosum(int arr[], int n, int target){

//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[i]+arr[j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

//to get the actual pair instead of true or false

pair<int,int> checkTwoSum(int arr[], int n, int target){
    //assuming (-1,-1) as no answer found
    pair<int,int> ans=make_pair(-1,-1); //initialize pair as -1,-1
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sums to target

                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            }
        }
    }
    return ans; 
}

int main(){
    int arr[]={10,20,5,30,15};
    int size=5;

    // bool ans= twosum(arr,size,35);

    // if(ans==true)
    // cout<<"pair found"<<endl;
    // else
    // cout<<" pair not found";

    pair<int,int> ans= checkTwoSum(arr,size,35);
    if(ans.first==-1 && ans.second==-1){
        cout<<" pair not found"<<endl;
    }
    else
    cout<<" pair found"<<ans.first<<", "<<ans.second<<endl;
    
    return 0;
}