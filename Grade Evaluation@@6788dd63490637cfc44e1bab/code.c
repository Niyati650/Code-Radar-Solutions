#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(a==A){
        printf("Excellent");
    }
    else if(b==B){
        printf("Good");
    }
    else if(c==C){
        printf("Average");
    }
    else if(d==D){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}