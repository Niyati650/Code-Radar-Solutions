#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    char b;
    scanf("%c",&a);
    printf("You entered: %c\n",a);
    scanf("%c",&b);
    printf("You entered: %c\n",b);

    return 0;
}