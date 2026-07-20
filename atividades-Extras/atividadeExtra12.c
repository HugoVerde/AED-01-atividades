/*Crie um programa que receba uma senha de um usuário, e verifique se a senha possui apenas caracteres alfabéticos (de a-z),
depois de verificar se se possui apenas caracteres alfabéticos, verifique se a senha possui pelo menos 10 caracteres e 2 letras maiúsculas.
Lembre-se de tratar as exceções (casos de erro)*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char senha[100];
	int tamanho, maiuscula = 0, e, i;
	
	while(1){
		
	    printf("Digite sua senha: ");
	    scanf("%s", senha);
	    
		tamanho = strlen(senha);
		
		for( i = 0; i < tamanho; i++){
			if(isalpha(senha[i])){
			}else{
				printf("\nA senha pode ter apenas letras do alfabeto....\n");
				break;
			}
				
		}
	      
		for(e = 0; e < tamanho; e++){
			if(senha[e] == toupper(senha[e])){
				maiuscula++;
			}
		}
	    if(maiuscula > 1 && tamanho > 9){
	    	break;
		}else{
			printf("\nTamnho ou quantidade de caracteres maiusculos insuficiente....\n");
		}
   }
   
   printf("\nA senha tem %d caracteres e %d sao maiusculas.", tamanho, maiuscula);
   printf("\nSua senha: %s\n", senha);
   
	return 0;
}