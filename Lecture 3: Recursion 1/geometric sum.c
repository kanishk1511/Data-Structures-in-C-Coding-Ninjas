double geometricSum(int k) {
    if(k == 0){
        return 1;
    }
    
    
   double smallans1 = 1 /( double )pow(2 , k);

    double smallans = geometricSum(k -1);
    double ans = smallans + smallans1;
    return ans;

    // Write your code here

}
