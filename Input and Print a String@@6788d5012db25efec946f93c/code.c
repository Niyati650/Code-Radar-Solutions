#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[5];
    printf("Enter a string:");
    scanf("%s",str);
    printf("You entered:%s\n",str);
    return 0;
}