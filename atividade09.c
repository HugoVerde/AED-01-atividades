/*Verificar se é par ou ímpar*/

#include <stdio.h>

void verificar(int num){
    if(num % 2 == 0){
        printf("\nO numero %d e par.\n", num);
    }else{
        printf("\nO numero %d e impar.\n", num);
    }
    
    
}

int main()
{
    int i = 1;
    
    while(i > 0){
        printf("Digite um numero inteiro para verificar se par ou impar, o um inteiro negativo para encerrar o programa.\n");
        scanf("%d", &i);
        verificar(i);
    }
    
    return 0;
}