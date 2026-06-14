/*
problem no:125 in LC
Approach: valid palindrome 
Time complexity : O(n)
Space complexity : O(1)
*/
   
   
   bool isPalindrome(string s) {
        string temp="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))    //checks all are alphanumeric chars are not
            temp+=tolower(s[i]);    //converts upper to lower
             //temp=temp+tolower (wrong) 

             //(OR)
             
             //use char c=tolower(s[i])
             //temp=temp+c; or temp+=c(efficient)
        }
        int left=0,right=temp.size()-1;
        while(left<right)
        {
            if(temp[left]!=temp[right])
            return false;
            left++;
            right--;
        }
        return true;
    }