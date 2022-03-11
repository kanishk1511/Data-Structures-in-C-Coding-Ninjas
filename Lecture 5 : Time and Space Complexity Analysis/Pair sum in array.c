int pairSum(int arr[], int n, int sum)
{
    int count = 0; // Initialize result
 
    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
 
    return count;
}
