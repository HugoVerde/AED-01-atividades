/*Faça um porgram em C que leia um númeor N inteiro e calcule e imprima a quantidadde de dígitos que número N possui.
 Para isso, desenvolva uma função para calcular a quantidade de dígitos de um número.*/

#include <stdio.h>
#include <string.h>
int contador(char tam[50]){
    int f;
    f = strlen(tam);
    return f;
}

int main()
{
    int digito;
    char tam[50];
    printf("Digite o numero:\n");
    scanf("%s", &tam);
    digito = contador(tam);
    printf("\nO numero %s tem %d digitos.", tam, digito);
    return 0;
}