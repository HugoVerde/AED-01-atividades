#include <stdio.h>
#include <stdlib.h>
   
    int life = 100;
	int cantis = 3;


int main(int argc, char *argv[]) {
	int resposta = 0;
	int i;
	for(int i = 0; i < 24; i++){
		if(life <= 0){
			printf("\nVocê não resistiu...");
			break;
		}
		printf("Vida: %d\n", life);
		printf("Cantis: %d\n", cantis);
		printf("Horas: %d", i;
		while(1){
			printf("\nO que deseja fazer:\nCaminhar (1) -10 pv e 1 hora;\nBeber agua (2) +30 pv;\ndDescansar (3) -5 pv e 1 hora;\n");
			scanf("%d", &resposta);
			if(resposta == 1){
				printf("\nCaminhando....\n");
				life = life - 10;
				break;
			}else if(resposta == 2){
				if((life + 30) <= 100){
					printf("\nBebendo....\n");
				    cantis = cantis - 1;
	                life = life + 30;
				    i--;
				    break;
				}else{
					printf(" Sua vida %dPV +30 nao pode sr maior que 100 de vida.....\nEscolha outro comando....\n", life);
				}
				
			}else if(resposta == 3){
				printf("\nDescansando....\n");
				life = life - 5;
				break;
			}else{
				printf("\nReposta invalida....\n");
			}
		}
		
	}
	printf("\nParabens, esta a salvo.");
	return 0;
}