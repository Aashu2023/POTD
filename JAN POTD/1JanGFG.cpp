//Second Largest
//Given an array Arr of size N, print second largest distinct element from an array.
//Example 1:
//Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.

//Example 2:
// Input: 
// N = 3
// Arr[] = {10, 5, 10}
// Output: 5
// Explanation: The largest element of 
// the array is 10 and the second 
// largest element is 5.


class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   
	    sort(arr,arr+n,greater<int>());//reverse sort
	    for(int i=1;i<n;i++){
	        if(arr[i]!=arr[0]){
	            return arr[i];
	        }
	    }
	    return -1;
	}
};