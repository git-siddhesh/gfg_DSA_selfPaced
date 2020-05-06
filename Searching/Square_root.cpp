// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);
  

 // } Driver Code Ends


// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    if(x == 0 or x == 1)
        return x;
    long long int ans;
    long long int start = 1, end = x;
    while(start <= end)
    {
        long long int mid = (start + end)/2;
        // cout<<"mid"<<mid;
        if (mid*mid == x) return mid;
        if (mid*mid < x) 
        {
            start = mid+1;
            ans = mid;
        }
        else
            end = mid-1;
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
