//bianry searching is always applied on monotonous searching// TC-o(logn)--fast searching metghod
#include<iostream>
#include<algorithm>
#include<numeric>

#include<vector>

using namespace std;

int main(){

//Searching--binary returns an iterator//
    vector<int> arr(6);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    arr[5]=60;

    int target=400;
    bool it = binary_search(arr.begin(), arr.end(), target); 
    cout<<it<<endl;

    return 0;

}