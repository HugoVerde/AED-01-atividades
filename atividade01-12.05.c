#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define porcentagem 0.30
int main(){
    
	int idade;
    int nomelimpo;
    float salario;
    float score;
    int aprovado;
    float parcela;
    int parcelaok;
    
    printf("Valor da parela:");
    scanf("%f", &parcela);
    printf("O nome do usuario e limpo?(1 para limpo e 0 para sujo):\n");
    scanf("%d", &nomelimpo);
    printf("Idade do usuario:\n");
    scanf("%d", &idade);
    printf("Salario do usuario:\n");
    scanf("%f", &salario);
    printf("Score bancario do usuario:");
    scanf("%f", &score);
    
    if(idade > 17 && nomelimpo == 1 && (score >= 800 || salario * porcentagem > parcela)){
        printf("Credito Aprovado!");
    }else{
        printf("Credito NEGADO!");
    }

    return 0;
}
