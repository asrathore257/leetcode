//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int s=0;
	    int e=n-1;
	    int mid=(s+e)/2;
	    int c=0;
	    while(s<=e)
	    {
	        
	        mid=(s+e)/2;
	         if (arr[mid] == x) {
            c++;
            int left = mid - 1;
            int right = mid + 1;

            // Count occurrences to the left of the current position
            while (left >= 0 && arr[left] == x) {
                c++;
                left--;
            }

            // Count occurrences to the right of the current position
            while (right < n && arr[right] == x) {
                c++;
                right++;
            }

            break;
        }
	        if(arr[mid]<x)
	        {
	            s=mid+1;
	        }
	        else
	        {
	            e=mid-1;
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends