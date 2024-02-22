// Example 1:

// Input:
// 5
// 111 222 333 444 555

// Output:
// 1

// Explanation:
// A[0] = 111 //which is a palindrome number.
// A[1] = 222 //which is a palindrome number.
// A[2] = 333 //which is a palindrome number.
// A[3] = 444 //which is a palindrome number.
// A[4] = 555 //which is a palindrome number.
// As all numbers are palindrome so This will return 1.
// Example 2:

// Input:
// 3
// 121 131 20
 
// Output:
// 0

// Explanation:
// 20 is not a palindrome hence the output is 0.

// Solution //


/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	
    	int count=0;
    
    	for(int i=0;i<n;i++)
    	{  	int rem=0,res=0;
    	    int temp=a[i];
    	    
            while(temp!=0)
            {    
                rem=temp%10;
                res=res*10+rem;
                temp=temp/10;
            }
            
            
            if(res!=a[i])
            return 0;
            
            
          	    
    	}
    	
    	return 1;
    	
    }
};