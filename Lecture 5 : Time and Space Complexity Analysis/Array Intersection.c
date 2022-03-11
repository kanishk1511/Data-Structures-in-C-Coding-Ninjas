void intersection(int *arr1, int *arr2, int n, int m) 
{


    sort(arr1,arr1+n); //function to sort an array
    sort(arr2,arr2+m);
    
    
    
    int i=0; int j=0;
    while (i<n && j<m){
        
        if(arr1[i]<arr2[j]){
            i++;
        } 
        else if(arr1[i]>arr2[j]) {
            j++;
        }
        else{
            cout<< arr1[i]<<" ";
            i++; j++;
        }
    }
}
    
