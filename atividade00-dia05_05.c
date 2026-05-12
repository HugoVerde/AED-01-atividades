 //O Problema: Construa um programa que simule o cálculo do valor total de  uma compra com desconto e calcule o troco.
/*
    Requisitos:
     Ler o nome do produto (use um array de char: char nome[50]; e %s para ler).
     Ler a quantidade comprada (int).
     Ler o preço unitário (float).
     Definir uma constante de desconto de 10% (#define DESCONTO 0.10).
     Calcular: subtotal, valor do desconto e total final.
     Ler o valor pago pelo cliente (float).
	 Calcular e exibir o troco.
	 Usar um operador relacional para verificar se o pagamento é suficiente (pagamento >= total) e exibir o resultado (1 ou 0) 

*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DESCONTO 0.9

float Calcular(float preco1){      // calcula o valor o desconto e retorna o valor total com o desconto atribuido.
    return preco1 * DESCONTO;
}
float deconto(float PRECO2){       // Função para culcular desconto, ela recebe o subtotal, multiplica pelo desconto e depois faz a diferença para retornar apenas o desconto.
    float TOTAL;
    TOTAL = PRECO2 * DESCONTO;
    return  PRECO2 - TOTAL;
}
float TROco(float valoRP, float precOU){     // se o valor pago for maior que a conta total, então o troco é calculado como a diferença.
    return precOU - valoRP;

}


int main(){
         char Nome[50];
         int qtd =0;
         float precoU = 0;
         float totalF = 0;
         float desCONTO = 0;
         float valorP;
         int ok;
         float Troco;
         float SUBtotal;
         //---------------------
         printf("\nNome do Produto:\n");
         scanf("%s", Nome);
         printf("\nQuantidade comprada:\n");
         scanf("%d", &qtd);
         printf("\nPreco unitario:\n");
         scanf("%f", &precoU);
         SUBtotal = precoU * qtd;
         totalF = Calcular(SUBtotal);
         desCONTO = deconto(SUBtotal);

         printf("VAlor pago pelo cliente:");
         scanf("%f", &valorP);

         if(valorP > totalF){
            Troco = TROco(valorP, SUBtotal);
            ok = 1;
         }else if(valorP == totalF){
             ok = 1;
             Troco = 0;
         }else{
             ok = 0;
             Troco = 0;

         }



         printf("Nome do Produto : %s\n", Nome);
         printf("Quantidade      : %d\n", qtd);
         printf("Preco unitario  : %.2f\n", precoU);
         printf("------------------------------------\n");
         printf("Subtotal:       : %.2f\n", SUBtotal);
         printf("Desconto (%10)  : %.2f\n", desCONTO);
         printf("Total           : %.2f\n", totalF);
         printf("-------------------------------------\n");
         printf("Valor pago      : %.2f\n",valorP);
         printf("Troco           : %2.f\n", Troco);
         printf("Pagamento ok    : %d", ok);
         system("pause");
         return 0;
}
