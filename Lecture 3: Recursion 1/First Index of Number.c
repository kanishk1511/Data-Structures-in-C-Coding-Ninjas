int firstIndex(int a[], int n, int x) {
    if(n == 0){
        return -1;

    }
    if(a[0] == x){
        return 0;
    }
    int smallfirstindex = firstIndex(a + 1 , n - 1 , x);
    int ans = smallfirstindex + 1;
    if(smallfirstindex == -1){
        return -1;
        
        
    }
    return ans;
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

}
