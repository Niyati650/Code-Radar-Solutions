void bubbleSort(char arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

}
char printArray(char arr[], int n){
    for(int k=0; k<n; k++) {
        printf("%c ", arr[k]);
    }
}