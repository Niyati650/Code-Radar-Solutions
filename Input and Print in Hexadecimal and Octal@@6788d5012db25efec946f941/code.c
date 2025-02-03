#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%c",&a);
    scanf("%d",&a);
    printf("Hexadecimal: %c\n",a);
    printf("Octal: %d",a);
    return 0;
}