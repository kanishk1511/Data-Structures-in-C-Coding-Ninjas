void rotate(int arr[], int d, int size) {
  
    int i=0,j=size-1; 
    while (i<j) {
        int temp = arr[i]; 
        arr[i]=arr[j]; 
        arr[j]=temp; i++;
        j--; 
    }
    i=0; 
    j=size-d-1;
    while (i<j) {
        int temp = arr[i];
        arr[i]=arr[j]; 
        arr[j]=temp; i++;
        j--;
    }
    i=size-d ;
    j=size-1; 
    while (i<j) { 
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp; i++; 
        j--;
    }
}
