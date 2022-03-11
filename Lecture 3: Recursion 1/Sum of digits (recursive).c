int sumOfDigits(int n) {
    if( n == 0){
        return n;
    }
    int ans = sumOfDigits(n / 10);
    
    return ans + ( n % 10);
    

}

}
