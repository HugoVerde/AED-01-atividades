/* Exercicio 3: Compressao de Dados (Run-Length Encoding)
A compressao RLE e util para otimizar dados repetitivos de entrada continua.
O Problema: Escreva um programa que leia um vetor de N elementos inteiros. O programa deve comprimir este vetor eliminando as repeticoes consecutivas e gerando dois novos vetores: um contendo os elementos unicos na ordem em que apareceram, e outro contendo a frequencia de repeticao consecutiva de cada elemento correspondente. O tamanho maximo original do vetor e 100.
Entrada: Um numero inteiro N e N valores inteiros preenchendo o vetor.
Saida: O vetor de elementos compactados e o vetor com as respectivas frequencias. */

#include <stdio.h>

int main(){
	int original[100], elemento[100], frequencia[100], N, i, m1, m2, b;
	printf("Tamanho da sequencia: ");
	scanf("%d", &N);
	
	if(N < 1){
		printf("\nNumero inavalido...");
		return 0;
	}
	
	for(i = 0; i < N; i++){
		printf("\nPosicao %d, numero: ", i);
		scanf("%d", &original[i]);
	}
	
	m1 = 0;

	frequencia[0] = 0;
	elemento[0] = original[0];
	for(i = 0; i < N; i++){
		if(original[i] == elemento[m1]){
			frequencia[m1] += 1;
		}else{
			m1++;
			elemento[m1] = original[i];
			frequencia[m1] = 1;
		}
	}
	
	printf("\nVetor de elementos:\n");
	
	for(i = 0; i < m1 + 1; i++){
		printf(" %d ", elemento[i]);
	}
		
	printf("\nVetor de frequencia:\n");
		
		for(i = 0; i < m1 + 1; i++){
		printf(" %d ", frequencia[i]);
	}
	return 0;
}