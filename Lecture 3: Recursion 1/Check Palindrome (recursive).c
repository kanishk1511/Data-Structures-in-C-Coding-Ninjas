#include<cstring>
bool palindrome_check(char a[] , int start, int end)
{
    if(end-start==1 || start==end)
    {
        return true;
    }
    else
    {
        if(a[start]==a[end])
        {
            return palindrome_check(a,start+1,end-1); 
        }
        else
        {
            return false;
        }
    }
}
bool checkPalindrome ( char a[] ){
   int len = strlen(a);
    
    return palindrome_check(a, 0, len - 1 );

}
