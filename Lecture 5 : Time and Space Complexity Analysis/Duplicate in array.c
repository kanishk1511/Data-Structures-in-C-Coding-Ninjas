int findDuplicate(int arr[], int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    int sum2 = ((n-1)*(n-2))/2;
    return sum - sum2;
    //Write your code here
}
