#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sum = a+b;
    printf("Sum: ",sum);
    return 0;
}