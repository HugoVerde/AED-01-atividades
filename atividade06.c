/*Faça uma função que verifique se um numero é primo. A fução deve retornar um valor logico. 
No porgrama principal leia indeterminados números inteiros positivos e escreva se cada um dos números é primo ou não.*/

#include <stdio.h>
#include <string.h>
int verificador(int num){
    int res;
    if(num != 2 && num % 2 == 0){
        return 0;
    }else if(num != 3 && num % 3 == 0){
        return 0;
    }else if(num != 5 && num % 5 == 0){
        return 0;
    }else if(num != 7 && num % 7 == 0){
        return 0;
    }else if(num != 11 && num % 11 == 0){
        return 0;
    }else if(num != 13 && num % 13 == 0){
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    int num1;
    while(1){
    printf("Digite o numero inteiro positivo para verificar, numero neagtivo finaliza o programa:\n");
    scanf("%d", &num1);
    if(num1 < 0){
        return 0;
    }
    if(verificador(num1) == 1){
        printf("\nO numeor %d e primo\n", num1);
    } else{
        printf("\nO numero %d nao e primo\n", num1);
    }
    
    }
    return 0;
}