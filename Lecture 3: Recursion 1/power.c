int power(int x, int n) {
    if(n == 0){
        return 1;
     
    }
      int smallpower = power(x , n - 1);
        int output = x * smallpower;
        return output;

}
