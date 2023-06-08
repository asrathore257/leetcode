//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:

int findK(vector<vector<int>> &a, int n, int m, int k)
{
    vector<int> ans;
    int total = n * m;
    int count = 0;
    int sr = 0;
    int sc = 0;
    int er = n - 1;
    int ec = m - 1;
    while (count < total)
    {
        // print start row
        for (int i = sc; i <= ec && count < total; i++)
        {
            ans.push_back(a[sr][i]);
            count++;
        }
        sr++;

        // print end column
        for (int i = sr; i <= er && count < total; i++)
        {
            ans.push_back(a[i][ec]);
            count++;
        }
        ec--;

        // print last row
        for (int i = ec; i >= sc && count < total; i--)
        {
            ans.push_back(a[er][i]);
            count++;
        }
        er--;

        // enter first column
        for (int i = er; i >= sr && count < total; i--)
        {
            ans.push_back(a[i][sc]);
            count++;
        }
        sc++;
    }

    return ans[k-1];

}

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends