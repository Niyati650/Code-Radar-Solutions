#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f",&a);
    float area=3.14*(a)*(a);
    printf("Area: %f",area);
    return 0;
}