/*Faça um programa que leia uma string de tamanho definido pelo programador, receba o input por um usuário, pegue o tamanho da string
e crie uma variável nova com o tamanho específico do texto digitado pelo usuário, copiando o texto da string 
original na variável nova e depois printe o texto da variável nova e compare o tamanho da variável original com a variável nova.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 150

int main(){
	
	char texto[tam];
	
	printf("Escreve o texto: ");
	fgets(texto, tam, stdin);
    
	char otimizado[strlen(texto)];
	strcpy(otimizado, texto);
	
	printf("%s", otimizado);
	printf("\nTamanho da string original %d;\nTamanho da nova string %d;", sizeof(texto), sizeof(otimizado));

    return 0;
}