#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    char true =a>b;
    printf("a>b:%d",true);
    return 0;
}