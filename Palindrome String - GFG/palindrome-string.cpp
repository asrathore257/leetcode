//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    int chk(int i,string& S)
    {
        int n=S.size();
        
        if(i>=n/2)
        {
            return true;
        }
        if(S[i]!=S[n-i-1])
        {
            return false;
        }
        chk(i+1,S);
        
        
    }
public:	
	int isPalindrome(string S)
	{
	    chk(0,S);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends