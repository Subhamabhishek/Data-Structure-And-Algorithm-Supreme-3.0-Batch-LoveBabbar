#include<iostream>


using namespace std;

int findOddOccuringElement(int arr[], int size){
   
    int s = 0; 
    int e = size-1;
    int mid = s+(e-s)/2;
    

    while(s<=e){
        
        //single element
        if(s==e){
            return s;
        }

     //duplicate does not exist
     int leftValue = -1;
     int rightValue = -1;
     int currentValue = arr[mid];

        if(mid-1 >= 0)
            leftValue = arr[mid-1]; //left most element

        if(mid+1<size)
            rightValue = arr[mid+1]; //right most element

        if(currentValue != leftValue && currentValue != rightValue)
            return mid;
        

        //duplicate exist in left index
        if(mid-1 >= 0 && currentValue == leftValue){
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){
                //pair starting index is odd
                //standing on right part
                e=mid-1;
            }
            else{
                //pairIndex even h
                //standing at left part
                //move to right part
                s=mid+1;
            }

        }


        //duplicate exists in right side
        else if(mid+1 < size && currentValue == rightValue){
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1){
                //pair starting index is odd
                //standing on right part
                e=mid-1;
            }
            else{
                //pairIndex even h
                //standing at left part
                //move to right part
                s=mid+1;
            }
        }       
       mid = s+(e-s)/2; 
        
    }
    return -1;
}

int main(){
    int arr[]={1,2,2,3,3};
    int size= 5;

    
    int ans= findOddOccuringElement(arr, size); 
    cout<<"ans index: "<<ans<<endl;
    cout<<"ans: "<<arr[ans]<<endl;

    return 0;
}