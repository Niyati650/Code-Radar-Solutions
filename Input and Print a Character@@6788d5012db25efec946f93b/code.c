#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a,b;
    printf("Enter a character:");
    scanf("%c",&a);
    printf("You entered: %c\n",a);
    printf("Enter a character:");
    scanf("%c",&b);
    printf("You entered: %c\n",b);

    return 0;
}