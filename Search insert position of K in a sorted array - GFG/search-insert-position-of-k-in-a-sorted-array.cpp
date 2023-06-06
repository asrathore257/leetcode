//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int s = 0;
        int e = N - 1;
        int m = (s + e) / 2;

        while (s <= e) {
            m = (s + e) / 2;

        if (Arr[m] == k) {
            return m;
        }

        if (k > Arr[m]) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }

    return s;
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
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends