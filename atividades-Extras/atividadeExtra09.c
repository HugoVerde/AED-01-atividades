/*Faça um algoritmo que vá receber dois números do tipo float digitado pelo usuário. Após isso, faça um menu que
que mostre as opções para o usuário: 1 - Soma, 2 - Subtração, 3 - Divisão, 4 - Multiplicação.
Faça esse algoritmo utilizando if-else.*/

#include <stdio.h>
void soma(float n1, float n2){
	printf("\nA soma e %f....\n", n1 + n2);
}
void sub(float n1, float n2){
	printf("\nA subtracao e %f....\n", n1 - n2);
}
void divi(float n1, float n2){
	printf("\nA divisao e %f....\n", n1 / n2);
}
void mult(float n1, float n2){
	printf("\nA soma e %f....\n", n1 * n2);
}
int main(){
	float NUM, NUM2;
	int opera;
	
	printf("Primeiro numereo: ");
	scanf("%f", &NUM);
	
	printf("\nPrimeiro numereo: ");
	scanf("%f", &NUM2);
	
	printf("\n1 - Soma, 2 - Subtracao, 3 - Divisao, 4 - Multiplicao: ");
	scanf("%d", &opera);
	
	if(opera == 1){
		soma(NUM, NUM2);
	}
	if(opera == 2){
		sub(NUM, NUM2);
	}
	if(opera == 3){
		divi(NUM, NUM2);
	}
	if(opera == 4){
		mult(NUM, NUM2);
	}
	
	printf("\nFIM....");
	return 0;
}