// Example 1:

// Input:
// N = 5
// Arr[] = {15, 2, 45, 12, 7}
// Output: 2
// Explanation: Only Arr[2] = 2 exists here.
// Example 2:

// Input: 
// N = 1
// Arr[] = {1}
// Output: 1
// Explanation: Here Arr[1] = 1 exists.
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function valueEqualToIndex() which takes the array of integers arr[] and n as parameters and returns an array of indices where the given conditions are satisfied. When there is no such element exists then return an empty array of length 0.


// Solution // 

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n)
	{
	   vector<int>j;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==i+1)
	        {
	           j.push_back(arr[i]);
	        }
	    }
	    return j;
	}
};