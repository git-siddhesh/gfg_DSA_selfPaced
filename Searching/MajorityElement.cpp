// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    int n = size;
    // your code here
    int count = 1, res = 0;
    for (int i =1; i< n; i++)
    {
        if(a[res] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    
    count = 0;
    for ( int i =0 ;i <n;i++)
    {
        if(a[res] ==a[i])
            count++;
    }
    if(count<= n/2)
        return -1;
    return a[res];
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
