//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    //first take the transpose of the matrix then change first and last row 
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
            vector<vector<int>> temp(n, vector<int>(n)); // Initialize temp matrix with dimensions n x n

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][i] = matrix[i][j]; // Transpose the matrix and store it in temp
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n / 2; i++) {
            int tempVal = temp[i][j];
            temp[i][j] = temp[n - 1 - i][j]; \
            temp[n - 1 - i][j] = tempVal;
        }
    }

    matrix = temp; 
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends