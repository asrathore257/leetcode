//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  long long cube(long long num) {
        return num * num * num;
    }
  public:
    long long sumOfSeries(long long N) {
        long long sum=0;
        if(N==0)
        {
            return 0;
        }
        
        return cube(N) + sumOfSeries(N - 1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends