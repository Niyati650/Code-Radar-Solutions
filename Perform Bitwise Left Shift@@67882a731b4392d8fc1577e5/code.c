#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a,&b);
    printf("%d",a<<1);
    printf("%d",a<<2);
    printf("%d",a<<3);
    return 0;
}