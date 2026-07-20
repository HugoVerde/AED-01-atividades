/*No final do ano de 2022, a empresa Saúde e Beleza concedeu um bônus de 25% do
valor do salário a todos os funcionários com tempo de trabalho na empresa igual ou
superior a 5 anos e de 10% aos demais. Faça um um programa em C que receba o
salário e o tempo de serviço de um funcionário em anos, calcule e mostre o valor do
bônus recebido por ele.*/
#include <stdio.h>

int main(){
	float anos, salario, diferenca;
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	printf("\nAnos: ");
	scanf("%f", &anos);
	
	diferenca = salario;
	
	if(anos >= 5){
		salario = salario * 1.25;
		diferenca = salario - diferenca;
	}else{
		salario = salario * 1.1;
		diferenca = salario - diferenca;
	}
	
	printf("\nSalario novo %f\nBonus: %f", salario, diferenca);
	
	return 0;
}