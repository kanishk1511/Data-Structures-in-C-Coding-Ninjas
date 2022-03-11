int multiplyNumbers(int m, int n) {
    if(n == 0){
        return 0;
    }
    
    int small = multiplyNumbers(m , n - 1);
    int ans = m + small;
    return ans;

    // Write your code here

}
