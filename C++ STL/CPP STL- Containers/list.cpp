#include<iostream>
#include<list>
using namespace std;


int main(){

//CREATION//
    list<int> myList;

//INSERTION//
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(10);


    myList.push_front(100); //100->10->20->30->40

//REMOVE//
    myList.pop_back();

    myList.pop_front();

    myList.remove(10);

///////////CLEAR, SIZE, EMPTY, FRONT, BACK, ITERATOR, SWAP, INSERT, ERASE same member function as VECTOR /////////////// 
 
//ITERATOR//

    list<int>::iterator it = myList.begin();  //syntax
    cout<<"traverse using iterator it: ";
    while(it !=myList.end()){   ///iterate tab tak karn ahaii jab tak ye end tak na pahunch jaye  
        cout<<*it<<" ";
        it++;
    }cout<<endl;

}