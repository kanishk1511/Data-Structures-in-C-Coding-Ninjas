int findUnique(int a[] , int n){
    int ans = a[0];
    for(int i = 1 ; i < n ;i++){
        // ans = ans ^ a[i];
        ans ^= a[i];
    }
    return ans;
    
    
}
