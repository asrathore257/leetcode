//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
  //x=6 
    long long int floorSqrt(long long int x) 
    {
           if (x < 2) {
        return x;
    }
    
    long long start = 0;
    long long end = x/2;
    long long result = 0;
    
    while (start <= end) {
        long long mid = start + (end - start) / 2;
        
        if (mid * mid == x) {
            return mid;
        }
        
        if (mid * mid < x) {
            start = mid + 1;
            result = mid;  // Store the potential floor square root
        } else {
            end = mid - 1;
        }
    }
    
    return result;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends