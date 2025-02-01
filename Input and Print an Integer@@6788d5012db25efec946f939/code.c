#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    printf("Enter an int:");
    scanf("%d",&a);
    printf("You entered: %d\n",a);
    return 0;
}