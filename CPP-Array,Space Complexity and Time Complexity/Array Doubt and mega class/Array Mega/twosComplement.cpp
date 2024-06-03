#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// vector<int> findComplement(vector<int> binary)
// {
//     int n = binary.size();
//     vector<int> twosComp(n + 1, 0);

//     // step 1. flip the bits
//     for (int i = n - 1, k = twosComp.size() - 1; i >= 0; i--, k--)
//         twosComp[k] = binary[i] == 0 ? 1 : 0;
//     // now i have flipped bits in my twosComp array

//     // Step 2. add 1
//     int carry = 1;
//     for (int i = twosComp.size() - 1; i >= 0; i--)
//     {
//         int sum = twosComp[i] + carry;
//         twosComp[i] = sum % 2;
//         carry = sum / 2;
//     }
//     if (carry)
//         twosComp[0] = carry;

//     return twosComp;
// }

// vector<int> findComplement2(vector<int> binary)
// {
//     // out size is same as input size.
//     int n = binary.size();
//     vector<int> twosComp(n, 0);

//     // step 1. flip the bits
//     for (int i = n - 1, k = n - 1; i >= 0; i--, k--)
//         twosComp[k] = binary[i] == 0 ? 1 : 0;
//     // now i have flipped bits in my twosComp array

//     // Step 2. add 1
//     int carry = 1;
//     for (int i = twosComp.size() - 1; i >= 0; i--)
//     {
//         int sum = twosComp[i] + carry;
//         twosComp[i] = sum % 2;
//         carry = sum / 2;
//     }

//     return twosComp;
// }

// int main()
// {
//     vector<int> binary = {0,0,0,0};
//     vector<int> twosComp = findComplement(binary);
//     for (int i = 0; i < twosComp.size(); i++)
//         cout << twosComp[i]<<" ";

//     cout << endl;
//     return 0;
// }

vector<int> find2sComplement(vector<int> binary)
{
    int n = binary.size();
    vector<int> twosComp(n , 0);

    // step 1. flip the bits
    for(int i=0; i<n; i++){
        if(binary[i]==0)
            twosComp[i] = 1;
        else if(binary[i] ==1)
            twosComp[i] = 0;
    }

    //step 2: add 1
    int carry = 1;
    for (int i = twosComp.size() - 1; i >= 0; i--)
    {
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;

        if(carry == 0){
        //optimization
        break;
    }
    }
    


    return twosComp;

}

int main()
{
    vector<int> binary = {0,1,1,0,1};
    vector<int> twosComp = find2sComplement(binary);
    for(int i=0; i<twosComp.size(); i++)
        cout<<twosComp[i]<<" ";
    
    cout << endl;
    return 0;
}