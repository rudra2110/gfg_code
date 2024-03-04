
// Example 1:

// Input:
// N = 5
// Array = {2, 2, 2, 2, 2}
// Output: 
// 1
// Explanation: After removing all the duplicates only one instance of 2 will remain i.e. {2} so modify array will contains 2 at first position and you should return 1 after modify the array.
// Example 2:

// Input:
// N = 4
// Array = {1, 2, 2, 4}
// Output: 3
// Explation: After removing all duplicates modify array will contains {1, 2, 4} at first 3 positions so you should return 3 after modify the array.

// Your Task:  
// You don't need to read input or print anything. Complete the function remove_duplicate() which takes the array a[] and its size n as input parameters and modifies it in place to delete all the duplicates. The function must return an integer X denoting the no. of distinct elements in the array keeping the first X elements of an array in increasing order. 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)


// Solution //


int remove_duplicate(int a[],int n)
    {
       int j=0;
       int l=0;
       
       for(int i=0;i<n-1;i++)
       {
           if(a[i]!=a[i+1])
           {
               a[j++]=a[i];
               l++;
           }
       }
       a[j]=a[n-1];
       
     return l+1;
       
    }