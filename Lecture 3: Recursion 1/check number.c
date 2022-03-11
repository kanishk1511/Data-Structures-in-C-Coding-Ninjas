bool checkNumber(int a[], int n, int x) {
    if(n == 0 ){
        return false;
    }
    
    if(a[0] == x){
        return true;
    }

    bool checksmallnumber = checkNumber(a+1 , n-1 , x);
    if(!checksmallnumber){
        return false;
    }else{
        return true;
    }
    


  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

}
