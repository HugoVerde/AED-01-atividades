/*Calcular fatorial*/

#include <stdio.h>

int fatorial(int num){
    int f,i;
    f = 1;
    for(i = 1; i <= num; i++){
        f = f * i;
    }
    return f;
}

int main()
{
    int num, res;
    printf("Numero para calcular fatorial:\n");
    scanf("%d", &num);
    res = fatorial(num);
    printf("A fatorial de %d e %d", num, res);
    
    return 0;
}