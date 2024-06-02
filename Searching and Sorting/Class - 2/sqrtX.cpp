#include<iostream>


using namespace std;

double mySqrt(int x) {
        int s=0;
        int e=x;
        long long int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){
            //happy case
            // to save int overflow we change int to long long int
            long long int product = mid*mid;
            if(product==x)
                return mid;
            
            if(product <x){
                //may be or may not be
                //store and compute
                ans = mid;
                //go to right to find or jyada pass ka ans
                s=mid+1;
            }
            else{
                //mif*mid>x -->left
                e=mid-1;
            }
            mid=s+(e-s)/2; 

        }
        // return ans;



}
int main(){
    int num =54;

    double ans = mySqrt(num);
    cout<< ans<<endl;

    return 0;
}