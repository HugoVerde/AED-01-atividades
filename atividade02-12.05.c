/* Tarefa: Desenvolva um programa em C que interaja com o usuário para simular o controle de 
segurança de um cofre bancário utilizando estruturas condicionais aninhadas (um if-else dentro de 
outro). O sistema deve tentar abrir o cofre, exibindo "Cofre ABERTO com sucesso", se a biometria e 
o reconhecimento de voz estiverem corretos, ou se a chave mestra e a senha mestra forem 
inseridas. Se a abertura falhar, exiba "Acesso NEGADO". Caso o cofre seja aberto com sucesso, o 
programa deve verificar imediatamente se o acesso ocorreu fora do horário comercial (antes das 
8h, depois das 18h ou aos finais de semana), disparando um "ALERTA SILENCIOSO" se for o caso, 
ou registrando "Acesso normal" caso contrário*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int biometriaok;
    int vozok;
    int senhaok;
    char senha[] = "senha";
    char tentativa[20];
    float horario;
    int dia;

    printf("A biometria bateu?: (1 para sim; 0 para nao)\n");
    scanf("%d", &biometriaok);

    printf("O reconhecimento de voz bateu? (1 para sim; 0 para nao):\n");
    scanf("%d", &vozok);
    getchar(); 

    printf("Digite a chave mestre:\n");
    fgets(tentativa, sizeof(tentativa), stdin);
    

    if (strcmp(tentativa, senha) == 0) {
        senhaok = 1;
    }else{
    	senhaok =0;
	}

    printf("Horario de agora (ex: 14 para 14h):\n");
    scanf("%f", &horario);

    printf("O dia da semana de hoje:\n");
    printf("Domingo = 1\nSegunda = 2\nTerca   = 3\nQuarta  = 4\nQuinta  = 5\nSexta   = 6\nSabado  = 7\n");
    scanf("%d", &dia);

   
    if ((biometriaok == 1 && vozok == 1) || senhaok == 1) {
        printf("Cofre ABERTO com sucesso!\n");

        
        if (dia != 1 && dia != 7 && horario > 8 && horario < 18) {
            printf("Acesso normal...\n");
        } else {
            printf("Alerta silencioso...\n");
        }
    } else {
        printf("Acesso NEGADO!\n");
    }

    return 0;
}
