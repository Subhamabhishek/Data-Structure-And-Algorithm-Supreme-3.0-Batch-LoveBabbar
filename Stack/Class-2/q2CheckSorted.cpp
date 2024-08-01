#include<iostream>
#include<stack>
#include<limits.h>

using namespace std;

bool checkSorted(stack<int> &s, int element1){
    //base case
    if(s.empty()){
        //traversed whole stack and it is sorted so return true
        return true;
    }

    //1case ham solve karenge
    int element2 = s.top();
    s.pop();

    if(element2 < element1){
        //iska matlab age ka ans check kar sakte hein
        bool agekaAns = checkSorted(s, element2);
        return agekaAns;
    }
    else{
        //iska matlab stack sorted nehi hai so age ka ans we cant check
        return false;
    }

}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(4);
    s.push(50);

    int element1=INT_MAX;
    cout<<checkSorted(s, element1)<<endl;

    return 0;
}