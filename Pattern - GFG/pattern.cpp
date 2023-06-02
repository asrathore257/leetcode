//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        
       /* for(int i=1;i<=n;i++)
        {
            int k=i;
            while(k<=n-1)
            {
                cout<<" ";
                k++;
            }
            for(int j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--)
        {
            int k=i;
            while(k<=n-1)
            {
                cout<<" ";
                k++;
            }
            for(int j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }*/
        for(int i=1;i<=n;i++)
        {
            int k=i;
            while(k<=n-1)
            {
                cout<<" ";
                k++;
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--)
        {
            int k=i;
            while(k<=n-1)
            {
                cout<<" ";
                k++;
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends