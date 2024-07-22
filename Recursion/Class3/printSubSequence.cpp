#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(string str, int i, string output, vector<string>& ans){
    if(i == str.size()){
        ans.push_back(output);
        return ;
    }
    //ek case ham solve karenge
    char ch = str[i];
    //include
    printSubsequence(str, i+1, output+ch, ans);
    printSubsequence(str, i+1, output, ans);
}

int main(){
    string  str="abc";
    int index=0;
    string output=" ";
    vector<string>ans;
    printSubsequence(str, index, output, ans);
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<ans.size();

    return 0;

}