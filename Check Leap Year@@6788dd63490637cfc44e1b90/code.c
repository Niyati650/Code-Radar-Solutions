#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a/4!=0){
        printf("Not aLeap year");
    }
    else{
        printf("Leap Year");
    }
    return 0;
}