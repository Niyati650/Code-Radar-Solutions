#include<stdio.h>
int main()
{
    int prime(int num){
        for(i=2;i<num;i++){
            if(num%2==0){
                return 0;
            }
        }
        return 1;
    }
    int main(){
        int t;
        scanf("%d",&t);
        while(t--){
            int num;
            scanf("%d",&n);
            printf("%d\n",isPrime(num));
        }
        return 0;
    }
