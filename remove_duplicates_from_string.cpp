// Given a string str which may contain lowercase and uppercase characters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.

// Example 1:

// Input:
// str = "geEksforGEeks"
// Output: 
// "geEksforG"
// Explanation: 
// After removing duplicate characters such as E, e, k, s, we have string as "geEksforG".
// Example 2:

// Input:
// str = "HaPpyNewYear"
// Output: 
// "HaPpyNewYr"
// Explanation: 
// After removing duplicate characters such as e, a, we have string as "HaPpyNewYr".
// Your Task:
// Complete the function removeDuplicates() which takes a string str, as input parameters and returns a string denoting the answer. You don't have to print answer or take inputs.

// Solution //

	string removeDuplicates(string str)
	{
	  
	  map<char,int> m;
	  string s="";
	  
	  for(int i=0;str[i]!='\0';i++)
	  {
	    m[str[i]]++;  
	  }
	  
	  for(int i=0;str[i]!='\0';i++)
	  {
	      if(m[str[i]]!=0)
	      {
	          s+=str[i];
	          
	          m[str[i]]=0;
	      }
	  }
	  
	  return s;
	  
	}