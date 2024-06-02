/*Given two integers one is a dividend and the other is the 
divisor, we need to find the quotient when the dividend is divided 
by the divisor without the use of any " / " and "%" operators*/

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333... which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5

#include<iostream>


using namespace std;

int getQuotient(int dividend, int divisor){
    //search space--> (+ve value of dividend) --> (-ve value of dividend)
    int s = 0; //as jo bhi value ayega woh +ve hii hoga so range will be from 0 to dividend only 
    int e = dividend;
    int mid = s+((e-s)>>1);
    int ans=-1;

    while(s<=e){
        if(divisor * mid == dividend){
            return mid;
        }
        if((divisor * mid) < dividend){
            //store and compute
            ans= mid;
            s=mid+1;
        }
        else
            //left
            e=mid-1;
        mid = s+((e-s)>>1);

    }
    return ans;



}

int main(){
    int dividend ;
    cout<<"Enter dividend: ";
    cin>>dividend;
    cout<<endl;
    
    int divisor ;
    cout<<"Enter divisor: ";
    cin>>divisor;
    cout<<endl;
 

    //mission to find quotient
    int ans= getQuotient(abs(dividend), abs(divisor)); //abs()-- means agar -ve mein hein tab bhi ye +ve mein value send karega
    
    if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
        ans= 0-ans;
    }
    cout<<"Final ans: "<<ans<<endl;
    return 0;
}