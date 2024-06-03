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

//lower bound----finds the first element greater or equal to a value  inj a sorted range
    
    auto ab= lower_bound(arr.begin(), arr.end(), 45);
    cout<<*ab<<endl;

//upper bound--finds first element greater than a value;
    auto ba= upper_bound(arr.begin(), arr.end(), 50);
    cout<<*ba<<endl;

//equal range--finds a range of elements equal to a value in a asorted array
        // search in web




///////////////////MIN, MAX ALGORITM//////////////////
    auto ac =min_element(arr.begin(),arr.end());
    cout<<*ac<<endl;
     auto ad =max_element(arr.begin(),arr.end());
    cout<<*ad<<endl;;

    return 0;
}
