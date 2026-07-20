/* Faça um programa que com o objetivo de realizar uma pesquisa em uma cidade.
Seu programa deve ler as seguintes características:
Sexo: Masculino ou Feminino
Cor do cabelo: Preto, loiro, ruivo ou castanho.
Cor dos olhos: Azul, verde ou castanho.
Idade.
Seu programa deve retornar os seguintes resultados:
A maior idade dos entrevistados
A média das idades dos entrevistados
A quantidade de indivíduos do sexo masculino cuja idade está entre 20 e 25
anos e que tenham olhos castanhos e cabelos pretos
A quantidade de indivíduos do sexo feminino cuja idade está entre 34 e 41
anos e que tenham olhos azuis e cabelos loiros
Dica: Utilize uma estrutura de repetição do while() para repetir a pesquisa até que o usuário diga para finalizar o programa
e retornar os resultados.
Desafio interessante, mas o enunciado podia ser melhor.
*/

#include <stdio.h>

float mediaIdade( float SOMA, float numero){
	return SOMA / numero;
}

int main()
{
    int sexo, olho, cabelo, opcao, i = 0;
    int numHomem = 0, numMulher = 0;
    float idade, somaIdade = 0, maiorIdade = 0;
    
    do{
    
    i++;
    
    printf("\nPessoa de numero %d", i);
	
	printf("\nIdade da pessoa:\n");
    scanf("%f", &idade);
    
	if(idade > maiorIdade){
    	maiorIdade = idade;
	}
	
	somaIdade += idade;
	
	printf("Cor do cabelo: preto(1); loiro(2); ruivo(3); castanho(4):\n");
	scanf("%d", &cabelo);
	
	printf("Cor dos olhos: azul (1); verde(2); castanho(3):\n");
	scanf("%d", &olho);
	
	printf("Genero masculino(1) ou feminino(0):\n");
    scanf("%d", &sexo);
    
    if(sexo == 1){
    	if(idade > 19 && idade < 26){
    		if(cabelo == 1 && olho == 3){
    			numHomem += 1;
			}
		}
	}else if(sexo == 0){
		if(idade > 33 && idade < 42){
			if(olho == 1 && cabelo == 2){
				numMulher += 1;
			}
		}
	}
    
    printf("Deseja adicionar mais uma pessoa (1) ou finalizar o programa (0)???");
    scanf("%d", &opcao);
    if(opcao == 0){
    	break;
	}
	
    }while(1);
    
    printf("\n");
    printf("\nMaior idade: %.2f", maiorIdade);
    printf("\nMedia das idades: %.2f", mediaIdade(somaIdade, i)); /*Criamos uma função float para calcular a média, inserindo a soma da idade e o divisor*/
    printf("\nHomens entre 20 e 25 anos com olhos castanhos e cabelos pretos: %d", numHomem);
    printf("\nMulheres entre 34 e 41 anos com olhos azuis e cabelos preto: %d", numMulher);
    printf("\n");
    printf("\nFinalizando programa.....");

    return 0;
}
