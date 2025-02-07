#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c){
        printf("%d",a);
    }
    else if(a<c && c>b){
        printf("%d",c);
    }
    else{
        printf("%d",b);
    }
    return 0;
}