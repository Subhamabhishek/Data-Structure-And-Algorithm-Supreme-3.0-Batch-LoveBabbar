#include<iostream>
#include<vector>
using namespace std;


int main(){
    // creation
    vector<int> marks(5,-1);
//RESERVE--YOU CAN INITIALIZE ITS CAPACITY FROM START//
    // marks.reserve(15);

    // vector<int> miles(10);
    // vector<int> distances(10,20); //10 blocks and harr block mein 20 haii

//PRINTING//
    cout<<*(marks.begin())<<endl;
    cout<<*(marks.end())<<endl;//give adress 

//INSERTION//
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

//SIZE //
    cout<<"size: "<<marks.size()<<endl;

//REMOVING ELEMENTS//
    marks.pop_back();
    cout<<"size: "<<marks.size()<<endl;

//USING FRONT AN BACK
    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;

//EMPTY
    if(marks.empty()==true)
        cout<<"array is empty"<<endl;
    else 
        cout<<"not empty"<<endl;

//at()
    cout<<"marks at index 6"<<marks.at(6)<<endl;
    cout<<"marks at index 6"<<marks[0]<<endl;

//CAPACITY//
    cout<<"capacity: "<<marks.capacity()<<endl;
//MAX_SIZE//
    cout<<"max size: "<<marks.max_size()<<endl;

//CLEAR//
    // marks.clear();

//INSERT//
    marks.insert(marks.begin(),60);
    cout<<"at 0 index: "<<marks.front()<<endl;

//ERASE//
    marks.erase(marks.begin(),marks.end());

//SWAP//
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    cout<<"printing first: "<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "
    <<first[3]<<endl;

//FOR-EACH//
    for(int i:first)
        cout<<i<<" ";
    cout<<endl;    
    for(int i:second)
        cout<<i<<" ";
    cout<<endl;
/// TRAVERSING THE VECTOR USING ITERATOR//
 // creating an iterator
    vector<int>::iterator it = first.begin();  //syntax

    while(it !=first.end()){   ///iterate tab tak karn ahaii jab tak ye end tak na pahunch jaye 
        cout<<"traverse using iterator it: "<<*it<<" ";
        it++;
    }


// 2D vector///
    vector<vector<int>> arr(5, vector<int>(4,0)); 
    //1st argument no. of rows 
    //2nd argument -columns and each cell initialize as 0
    int totalrows=arr.size();
    int totalcolumns=arr[0].size();
      
//////////////unordered colmns-----JACK ARRAY//////////////
    vector<vector<int>> brr(4);
    
    brr[0]=vector<int>(4);
    brr[1]=vector<int>(2);
    brr[2]=vector<int>(5);
    brr[3]=vector<int>(3);

    int totalrows=brr.size();
    // int totalcolumnscount=brr[i].size();
    

    return 0;
}

