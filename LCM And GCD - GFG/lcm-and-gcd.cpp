//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long calculateGCD(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

vector<long long> lcmAndGcd(long long A, long long B) {
    vector<long long> ans;
    long long lcm = 0;
    long long gcd = 1;

    if (A == 0 || B == 0) {
        ans.push_back(0);
        ans.push_back(0);
        return ans;
    }

    gcd = calculateGCD(A, B);
    lcm = (A / gcd) * B;

    ans.push_back(lcm);
    ans.push_back(gcd);
    return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends