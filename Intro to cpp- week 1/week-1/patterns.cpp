#include<iostream>
using namespace std;

// void fullPyramid(int n) {
//         for (int row=0; row< n; row++){
//             // 1.space
//             for(int col=0; col<n-row-1; col++)
//             cout<<" ";
//             // 2.star
//             for(int col=0; col<row+1; col++)
//             cout<<"* ";
//             cout<<endl;
//         }
// }
// // for inverted full pyramid function

// void invertedFullPyramid(int n) {
//         for (int row=0; row< n; row++){
//             // 1.space
//             for(int col=0; col<row; col++)
//             cout<<" ";
//             // 2.star
//             for(int col=0; col<n-row; col++)
//             cout<<"* ";
//             cout<<endl;
//         }
// }

// //for diamond
// void diamond(int n){
//     fullPyramid(n);
//     invertedFullPyramid(n);

// }

//hollow pyramid
// void hollowPyramid(int n) {
//         for (int row=0; row< n; row++){
//             // 1.space
//             for(int col=0; col<n-row-1; col++)
//             cout<<" ";

//             // 2.star
//             for(int col=0; col<row+1; col++)
//             {
//                 if(row==0 || row==n-1 || col==0 ||col==row)
//                  cout<<"* ";
//                 else
//                  cout<<"  ";
//             }
            
//             cout<<endl;
//         }
// }

//mix pyramid

// void mixPyramid(int n){
//     //part1

//     for(int i=0; i<n; i++){

//         //1st stars
//         for(int j=0; j<n-i; j++)
//             cout<<"*";

//         //2nd space
//         for(int j=0; j<2*i+1; j++)
//             cout<<" ";

//         for(int j=0; j<n-i; j++)
//             cout<<"*";
        
//         cout<<endl;
//     }

//     //part2

//     for(int i=0; i<n; i++){

//         //1st stars
//         for(int j=0; j<i+1; j++)
//             cout<<"*";

//         //2nd space
//         for(int j=0; j<2*(n-i)-1; j++)
//             cout<<" ";

//         for(int j=0; j<i+1; j++)
//             cout<<"*";
        
//         cout<<endl;
//     }
// }

//fancy 1 2 pyramid

void fancypyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<2*i+1; j++){

            if(j % 2==0)
            cout<<i+1;
            else
            cout<<"*";
        }
        cout<<endl;
    }

}

//inverted fancy
// void invertedFancy(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<2*(n-i)-1; j++){

//             if(j % 2==0)
//             cout<<n-i;
//             else
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }


//full fancy 12

// void fullFancy(int n){
//     fancypyramid(n);

//     //after full pyramid print n will be n-1, then it will print inverted as per updated n
//     n--;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<2*(n-i)-1; j++){

//             if(j % 2==0)
//             cout<<n-i;
//             else
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

void ABCBA(int n){
    for(int i=0; i<n; i++){
      char ch='A';//ASCII 65 init.
      for (int j = 0; j < i+1; j++)
      {
        /* code */
        cout<<ch;
        ch++;
      }
      ch--;

      while(ch>'A'){
        ch--;
        cout<<ch;
      }
      cout<<endl;
        
    }
}



int main(){

    // int n;
    // cin>>n;
    // int m;
    // cin>> m;

    // for (int r=0; r<n; r++){
    //     for (int c=0; c<m; c++){
    //         if(r==0||r== n-1){
    //             cout<< "*";
    //         }
    //         else{
    //             if(c==0 || c== m-1){
    //                 cout<<"*";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
                
    //         }   
    //     }
    //     cout<<endl;
    // }

// half pyramid
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

// inverted half pyramid
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

//Hollow half pyramid

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         if(i==0 || i==1 || i==n-1 || i==j || j==0){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;

    // }

//inverted hollow half pyramid

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         if(i==0 || i==n-1 || i+j==n-1 || j==0){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;

    // }

// full pyramid- see upper function

    int n;
    cin>>n;

    // fullPyramid(n);
    // invertedFullPyramid(n);
    // diamond(n);
    // hollowPyramid(n);
    // mixPyramid(n);
    // fancypyramid(n);
    // fullFancy(n); 
     ABCBA(n);

    return 0;    

}