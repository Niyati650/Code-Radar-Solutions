#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if (arr[0]>arr[1]){
        printf("%d",arr[1]);
        return 0;
    }

    for(int j=1;j<n-1;j++){
        if (arr[j]>arr[j-1] && arr[j]>arr[j+1]){
            printf("%d",arr[j]);
            return 0;
        }
    }
    if (arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
        return 0;
    }
    else{
        printf("-1");


    }
}