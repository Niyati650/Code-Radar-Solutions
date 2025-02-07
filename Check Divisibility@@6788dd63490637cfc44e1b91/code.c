#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11!=0){
        printf("Not Divisible");
    }
    else if(a%5!=0 && a%11==0){
        printf("Not Divisible");
    }
    else{
        printf("Divisible");
    }
    return 0;
}