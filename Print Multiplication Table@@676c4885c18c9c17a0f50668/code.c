// Your code here...
#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        i=i+2;
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}