int allIndexes(int a[], int n, int x, int output[]) {
    if(n == 0){
        return 0;
    }
    int ans = allIndexes(a + 1, n - 1 , x ,output);
        if(a[0] == x){
            for(int i = ans - 1; i >= 0 ; i--){
                output[i+1] = output[i] + 1;
            }
        output[0] = 0;
       ans++;

    }else{
        for(int i = ans - 1; i >= 0 ; i--){
            output[i]++;
        }
    }
    return ans;
}
