//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isPowerof3(int N){
        if(N==1)
        {
            return "Yes";
        }
        if(N==0)
        {
            return "No";
        }
        if(N%3!=0)
        {
            return "No";
        }
        return isPowerof3(N/3);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPowerof3(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends