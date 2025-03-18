// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(ch){
        case'+':
        c=a+b;
        printf("%d",c);
        break;
        case'-':
        c=a-b;
        printf("%d",c);
        break;
        case'*':
        c=a*b;
        printf("%d",c);
        break;
        case'\':
        if(b!=0){
            c=a/b;
            printf("%d",c);
        }
        else{
            printf("error");
        }
        break;
        default:
        printf("error");
        break;
    }
}