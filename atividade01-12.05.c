/*Tarefa: Escreva um programa em C para aprovação de crédito imobiliário solicitando os dados ao 
usuário e utilizando uma única estrutura condicional composta (if-else) e operadores lógicos. O 
programa deve avaliar os dados e exibir a mensagem "Crédito APROVADO" apenas se o cliente 
tiver 18 anos ou mais e possuir o nome limpo, desde que, obrigatoriamente, o valor da parcela não 
ultrapasse 30% do seu salário ou o seu score de crédito seja superior a 800. Caso qualquer uma 
dessas exigências conjuntas não seja atendida, o sistema deve exibir "Crédito NEGADO"*/

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
