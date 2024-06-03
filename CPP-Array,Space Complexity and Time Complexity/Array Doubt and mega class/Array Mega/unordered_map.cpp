/////used to seach a value so unordered//

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int, int> table; // includes 1 int as roll no. and 1 int for desk no. 

//insertion//
    table[1]=53;
    table[2]=54;
    table[3]=55;
//if we give table 2 a new value the older value will be delete and it will upgrade 
    table[2]=57;


//iterate//
//map mein iteration karne ke liye ek iterator chahiye 

    unordered_map<int, int>::iterator it;  //syntax to access each entry in map //only 1 tym declare 
    for(it= table.begin(); it != table.end(); it++){
        int key = it->first;        //syntax
        int value = it->second;
        cout<<"key: "<< key << " value: "<< value <<endl;
    }

//Another syntax//
// using for-each loop//

    // for(auto it: table){
    //     int key = it.first;     //syntax
    //     int value = it.second;
    //     cout<<"key: "<< key << " value: "<< value <<endl;
    // }

//find ?// table /map bht fast (Avg case comp) o(1)

    //2 is key 
    if(table.find(2) != table.end()){   //this shows if value is there before table ends
        //found
        int value =table[2];
        cout<<value<<endl; 
    }
    else{

        //not found if woh end tak pahunch jaye 
        cout<<"not found"<<endl;  
    }
    
//deletion
//key se hii hota haii
    table.erase(2);


//printing again to see the result

    cout<< "after erase"<<endl;

    for(it= table.begin(); it != table.end(); it++){
        int key = it->first;        //syntax
        int value = it->second;
        cout<<"key: "<< key << " value: "<< value <<endl;
    }

//Declare after deletion:

    cout<<"Declare after deletion: "<<endl;

    if(table.find(2) != table.end()){   //this shows if value is there before table ends
        //found
        int value =table[2];
        cout<<value<<endl; 
    }
    else{

        //not found if woh end tak pahunch jaye 
        cout<<"not found"<<endl;  
    }


    return 0;
}