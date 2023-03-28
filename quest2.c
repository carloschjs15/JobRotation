#include<stdio.h>

int fib(int a, int b, int n){
    if(b == n){
        return 1;
    }else if(b > n){
        return 0;
    }else{
        return fib(b, a+b, n);
    }
    
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    if(fib(0,1,n) == 1){
        printf("O numero pertence a sequencia!");
    }else{
        printf("O numero nao pertence a sequencia!");
    }
    return 0;
}
