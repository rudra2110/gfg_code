// Given an array arr of size N and an element k. The task is to find the count of elements in the array that appear more than n/k times.

// Example 1:

// Input:
// N = 8
// arr = [3,1,2,2,1,2,3,3]
// k = 4
// Output: 
// 2
// Explanation: 
// In the given array, 3 and 2 are the only elements that appears more than n/k times.
// Example 2:

// Input:
// N = 4
// arr = [2,3,3,2]
// k = 3
// Output: 
// 2
// Explanation: In the given array, 3 and 2 are the only elements that appears more than n/k times. So the count of elements are 2.
// Your Task:
// The task is to complete the function countOccurence() which returns count of elements with more than n/k times appearance.


// Solution //


 int countOccurence(int arr[], int n, int k) 
    {
        
     int freq=n/k;
     
     unordered_map<int,int> ump;
     
     for(int i=0;i<n;i++)
     {
         ump[arr[i]]++;
     }
      
      int count=0;
     
     for(int i=0;i<n;i++)
     {
         if(ump[arr[i]]>freq)
         {
             count++;
             ump[arr[i]]=0;
         }
     }
     
     return count;
        
    }