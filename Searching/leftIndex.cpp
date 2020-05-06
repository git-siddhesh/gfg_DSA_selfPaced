// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends

int bSearch(int arr[], int l, int r, int x)
{
    if (l<=r)
    {
        int mid = l+(r-l)/2;
        if (arr[mid] == x && (mid == 0 || arr[mid-1]!= x))
            return mid;
        if (arr[mid] >= x)
            return bSearch(arr,l,mid-1,x);
        else
            return bSearch(arr,mid+1,r,x);
    }
    return -1;
}

// Function to find element in sorted array
int leftIndex(int sizeOfArray, int arr[], int elementToSearch){
    
    // Your code here
    return bSearch(arr,0,sizeOfArray-1,elementToSearch);
    
}




// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
