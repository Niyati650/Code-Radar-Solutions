int isPrime(int num){
    int c;
    for(int i=1;i<=num;i++){
        c=0;
        if(num%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}