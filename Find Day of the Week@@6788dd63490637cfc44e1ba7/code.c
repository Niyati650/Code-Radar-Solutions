#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("Monday");
    }
    else if(a==2){
        printf("Tuesday");
    }
    else{
        printf("Friday");
    }
    return 0;
}