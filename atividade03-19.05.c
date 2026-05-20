/*Tarefa: Desenvolva um programa em C para um sistema escolar que determina o percentual de 
bolsa de estudos de um aluno com base em sua média final. O programa deve solicitar a média do 
aluno (de 0.0 a 10.0) e o valor integral da mensalidade. Utilizando a estrutura de seleção encadeada 
(else if), aplique rigorosamente as seguintes regras em ordem: média igual ou superior a 9.5 
garante 100% de bolsa; média igual ou superior a 8.5 garante 50%; média igual ou superior a 7.0 
garante 25%; e média igual ou superior a 5.0 garante 10%. Médias abaixo de 5.0 não recebem 
bolsa. Ao final, o programa deve exibir o percentual concedido e o valor final da mensalidade*/

#include <stdio.h>
int main(){
    float salarioB, salarioL, imposto;
    
    printf("salario bruto do usuario:");
    scanf("%f", &salarioB);
    if(salarioB <= 2000){
        salarioL = salarioB;
         imposto = 0;
    }else if(salarioB > 2000 && salarioB <= 3000){
        salarioL = salarioB * 0.92; 
         imposto = salarioB - salarioL;
        
    }else if(salarioB > 3000 && salarioB <= 4500){
        salarioL = salarioB * 0.82;
         imposto = salarioB - salarioL;
    }else if(salarioB > 4500){
         salarioL = salarioB * 0.72;
         imposto = salarioB - salarioL;
    }
    printf("Salario liquido: %3.f \n", salarioL);
    printf("Imposto descontado: %3.f \n", imposto);

    return 0;
}