// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int arr[5000001];


 // } Driver Code Ends

int bSearch(int l ,int r, int n)
{
    if(l<= r)
    {
        int mid = int(l+(r-l)/2);
        if (arr[mid] == 1 and (mid ==n-1 or arr[mid+1] == 0 ))
            return mid;
        if (arr[mid] ==1)
            return bSearch(mid+1,r,n);
        else
            return bSearch(l,mid-1,n);
    }
    return -1;
} 
// Function to count number of Ones
// arr: input array declared globally
// n: size of input array
int countOnes(int n)
{
    
    // Your code here
    return bSearch(0,n-1,n)+1;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
                
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
