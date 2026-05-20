/* Tarefa: Crie um programa em C que simule o funcionamento de uma máquina de vendas automática 
interativa. O sistema deve apresentar um menu com opções de produtos baseados em códigos numéricos 
exatos: 101 para Refrigerante (R$ 5,00), 102 para Suco (R$ 4,50), 103 para Água (R$ 3,00) e 104 para 
Salgadinho (R$ 6,00). Utilizando obrigatoriamente a estrutura switch-case para avaliar o código digitado 
pelo usuário, o programa deve identificar o produto e definir seu preço. Em seguida, o sistema deve solicitar 
o valor pago em dinheiro pelo cliente. Para finalizar, utilize uma condicional simples composta para validar 
a transação: calcule e exiba o troco se o pagamento for suficiente, ou exiba uma mensagem de erro 
indicando o valor faltante caso o dinheiro seja insuficiente*/

#include <stdio.h>
int main(){
    int resposta;
    float saldo = 1000;
    float deposito;
    float saque;
    printf("escolhaa operacao:\n");
    printf("Consultar Saldo: 01:\n");
    printf("Fazer Deposito:  02\n");
    printf("Realizar Saque:  03\n");
    printf("Sair:            04\n");
    scanf("%d", &resposta);
    
    switch(resposta){
    case 1:
        printf("Seu saldo e %2.f", saldo);
        break;
    case 2:
        printf("Seu saldo e %d", saldo);
        printf("Quanto quer depositar:");
        scanf("%f", &deposito);
        saldo += deposito;
        printf("\nSeu saldo com deposito agora e: %2.f", saldo);
        break;
    case 3:
        printf("Seu saldo e %3.f , quanto deseja sacar:", saldo);
        scanf("%f", &saque);
        if(saque == saldo || saque < saldo){
            saldo -= saque;
            printf("Seu saldo agora: %2.f", saldo);
        } else{
            printf("ALERTA, SALDO INSUFICIENTE PARA OPERACAO!");
        }

        break;
    case 4:
        printf("Saindo...");
        break;
    default:
        printf("Resposta invalida");
        break;
    }
    return 0;
}