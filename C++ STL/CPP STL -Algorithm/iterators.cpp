#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout<<2*a<<" ";
}

bool checkEven(int a){
   return a % 2 == 0;

}


int main(){

    // vector<int> arr(5);

    // arr[0]=11;
    // arr[1]=20;
    // arr[2]=11;
    // arr[3]=40;
    // arr[4]=11;

//for specific range --depends on function
    // for_each(arr.begin(),arr.end(), printDouble);

//find algorithm//----takes iterator
    // int target=400;
    // auto it= find(arr.begin(),arr.end(), target);
    // cout<<*it<<endl;

//find_if//----depends on criteria as a function format
    // auto ab = find_if(arr.begin(),arr.end(), checkEven); //returns a iterator
    // cout<<*ab<<endl;   /// returns first even number//

//counting a specific number in array//
    // int target=11;
    // int ans=count(arr.begin(),arr.end(), target);
    // cout<<ans<<endl;

//count_if depends on criteria i.e function//
    // int ans=count_if(arr.begin(),arr.end(), checkEven); //gives output --how many even numbers are present in array
    // cout<<ans<<endl;


////SORTING////
//     arr[0]=11;
//     arr[1]=40;
//     arr[2]=10;
//     arr[3]=20;
//     arr[4]=12;
//     arr[5]=60;


//     sort(arr.begin(), arr.end());

//     for(int a: arr){
//         cout<<a<<" ";
//     }cout<<endl;

// //reverse an array
     

//     for(int a: arr){
//         cout<<"Reverse an arry: "<<a<<" ";
//     }   

//ROTATE an array//
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // arr[3]=40;
    // arr[4]=50;
    // arr[5]=60;

    // rotate(arr.begin(), arr.begin() + 3, arr.end());
    // cout<<"after rotate: ";
    // for(int a: arr){
    //     cout<<a<<" ";
    // }cout<<endl;

//UNIQUE--REMOVE DUPLICATE ARRAY FROM SORTED ARRAY//

    // arr[0]=10;
    // arr[1]=10;
    // arr[2]=20;
    // arr[3]=30;
    // arr[4]=30;
    // arr[5]=10;

    // auto it = unique(arr.begin(),  arr.end());
    // //it iterator k pehle saare unique element haii 
    // // it k baad saare duplicate elemnt haii
    // arr.erase(it, arr.end());
    // for(int a: arr){
    //     cout<<a<<" ";
    // }cout<<endl;

//PARTITION// 
  vector<int> arr(7);
    arr[0]=10;
    arr[1]=11;
    arr[2]=22;
    arr[3]=13;
    arr[4]=14;
    arr[5]=15;
    arr[6]=16;

    auto it = partition(arr.begin(),  arr.end(), checkEven);
    //it iterator k pehle saare even number haii
    // it k baad saare odd elemnt haii

    for(int a: arr){
        cout<<a<<" ";
    }cout<<endl;





    return 0;
}