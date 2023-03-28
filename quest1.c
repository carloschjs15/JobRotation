#include<stdio.h>

int main(){
    int i=13, soma=0, k=0;
    while(k < i){
        k++;
        soma += k;
    }
    printf("%d", soma);
    return 0;
}
