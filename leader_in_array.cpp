// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

// Example 1:

// Input:
// n = 6
// A[] = {16,17,4,3,5,2}
// Output: 17 5 2
// Explanation: The first leader is 17 
// as it is greater than all the elements
// to its right.  Similarly, the next 
// leader is 5. The right most element 
// is always a leader so it is also 
// included.
// Example 2:

// Input:
// n = 5
// A[] = {1,2,3,4,0}
// Output: 4 0
// Explanation: 0 is the rightmost element
// and 4 is the only element which is greater
// than all the elements to its right.
// Your Task:
// You don't need to read input or print anything. The task is to complete the function leader() which takes array A and n as input parameters and returns an array of leaders in order of their appearance.


// Solution //

vector<int> leaders(int a[], int n)
    {
       vector<int> v;
       
       int temp=a[n-1];
       
       v.push_back(a[n-1]);
       
       for(int i=n-2;i>=0;i--)
       {
           if(a[i]<temp)
           {
              continue;
           }
           
            temp=a[i];
           v.push_back(a[i]);
           
       }
      
       reverse(v.begin(),v.end());
       return v;
    }