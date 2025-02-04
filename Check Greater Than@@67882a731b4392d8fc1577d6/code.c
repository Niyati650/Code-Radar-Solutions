#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    char c=a>b;
    char d=b<a;
    printf("%c",c);
    return 0;
}