/*Exercicio 2: A Hipotese de Collatz e o Maior Intervalo
A Conjectura de Collatz aplica-se a qualquer numero inteiro positivo N. Se N for par, divida-o por 2; se for impar, multiplique-o por 3 e some 1. Repete-se o processo ate que N se torne 1. O numero de passos necessarios para atingir o valor 1 e chamado de comprimento do ciclo.
O Problema: Desenvolva um algoritmo que receba dois valores inteiros positivos, I e J, que delimitam um intervalo fechado. O programa deve calcular o comprimento do ciclo de Collatz para todos os numeros entre I e J (inclusive) e determinar qual numero gerou a maior sequencia e qual foi esse comprimento maximo. O intervalo pode ser informado em qualquer ordem. Nao utilize vetores.
Entrada: Dois inteiros positivos I e J.
Saida: Limite inferior, limite superior, numero que gerou o maior ciclo e o tamanho do ciclo encontrado..*/


#include <stdio.h>

int main(){
	int i, j, a, maior, num, passos, quem, L;
	printf("Numero I: ");
	scanf("%d", &i);
	printf("Numero j");
	scanf("%d", &j);
	printf("O conjunto do intervalo: ");
	
	if(i > j){
    int aux = i;
    i = j;
    j = aux;
    }
	
	for(L = i; L < j + 1;  L++){
		printf(" %d ", L);
	}
	
	printf("\n");
	maior = 0;
	a = i;
		
	while(a < j + 1){
		passos = 0;
		num = a;
		if(num == i){
			printf("Limite inferior %d", a);
		}else if(num == j){
			printf("Limite superior %d", a);
		}
		
        while(num > 1){
			if(num % 2 == 0){
		        num /= 2;
	        }else{
		        num *= 3;
		        num += 1;
            }
            passos++;
		}
	    
		if(passos > maior){
			maior = passos;
			quem = a;
		}
		
	    if(a == i){
			printf(" --- passos %d\n", passos);
		} 
		if(a == j){
			printf(" --- passos: %d\n", passos);
		}
		
		a++;
	
	}
	printf("\nMumero de mairo ciclo: %d;  Quantidade de passos: %d", quem, maior);

	return 0;
}