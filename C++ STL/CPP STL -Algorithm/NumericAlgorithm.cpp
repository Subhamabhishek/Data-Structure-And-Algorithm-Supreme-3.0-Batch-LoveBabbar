#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>

using namespace std;

int main(){

//accumulate//

//     vector<int> arr(6);
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     arr[3]=40;
//     arr[4]=50;
//     arr[5]=60;

//     int sum = accumulate(arr.begin(), arr.end(), 0); ///initialize the sum value as 0
//     cout<<sum<<endl;

// //ININER PRODUCT//
//         vector<int> first;
//         first.push_back(1);
//         first.push_back(2);
//         first.push_back(3);

//         vector<int> second;
//         second.push_back(4);
//         second.push_back(5);
//         second.push_back(6);

//         int ans=inner_product(first.begin(),first.end(), second.begin(), 0); //0--initial product value and dont need to write .end() for second
//         cout<<ans<<endl; // after product each product will add and give ans

//PARTIAL SUM//

    
        // vector<int> third;
        // third.push_back(4);
        // third.push_back(5);
        // third.push_back(6);
        // third.push_back(7);

        // vector<int> result(third.size());
        // partial_sum(third.begin(), third.end(), result.begin());// partial sum will be stored in result from begning as size of third

        // for(int a: result){
        //     cout<<a<<" ";
        // }cout<<endl;

//IOTA//
//if i say iota(1)---toh ye 1 se lekar  end tak integer fill karega 
//if i say iota(111)---toh ye 111 se lekar  end tak integer fill karega 
    vector<int> first(5);
    iota(first.begin(), first.end(), 250);
    for(int a: first){
            cout<<a<<" ";
    }cout<<endl;



        
    return 0;
}