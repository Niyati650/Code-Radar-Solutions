#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    float b;
    scanf("%f",&a);
    scanf("%f",&b);
    product=(a*b);

    printf("Product: %.2f",product);
    return 0;
}