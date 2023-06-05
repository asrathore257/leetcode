//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    int ans;
	    for(int i=0;i<=N-1;i++)
	    {
	        if(i==0)
	        {
	            if(A[i]!=A[i+1])
	            {
	                ans=A[i];
	                break;
	            }
	            
	        }
	        if(i==N-1)
	        {
	            if(A[i]!=A[i-1])
	            {
	                ans=A[i];
	                break;
	            }
	            
	        }
	        if(A[i]!=A[i+1] && A[i]!=A[i-1])
	        {
	            ans=A[i];
	            
	        }
	        
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends