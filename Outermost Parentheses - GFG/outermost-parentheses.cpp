//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
       int n = s.size();
    vector<int> a;
    stack<char> st;
    int nestingLevel = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (nestingLevel > 0) {
                // Add all opening parentheses except the outer ones
                a.push_back(s[i]);
            }
            st.push(s[i]);
            nestingLevel++;
        } else if (s[i] == ')') {
            nestingLevel--;
            if (nestingLevel > 0) {
                // Add all closing parentheses except the outer ones
                a.push_back(s[i]);
            }
            st.pop();
        }
    }

    string result(a.begin(), a.end());
    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends