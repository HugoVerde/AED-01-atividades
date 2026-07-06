/*icio 1: Intersecao de Retangulos no Plano Cartesiano
Em sistemas de computacao grafica, a deteccao de colisao e fundamental. Considere dois retangulos alinhados com os eixos cartesianos. Cada retangulo e definido por dois pontos: o canto inferior esquerdo (X1, Y1) e o canto superior direito (X2, Y2). 
O Problema: Escreva um programa que leia as coordenadas de dois retangulos e determine a area da regiao resultante da intersecao entre eles. Se os retangulos nao se interceptarem ou apenas se tocarem nas bordas, a area de intersecao deve ser considerada 0.
Entrada: Oito valores inteiros (coordenadas X e Y dos dois pontos de cada retangulo).
Saida: Um unico valor inteiro representando a area da intersecao.x*/

#include <stdio.h>

int main(){

	int Ax1, Ax2, 
	Bx1, Bx2, 
	Ay1, Ay2,
	By1, By2;
	int i, a = 0, areaR, intercecao, b, c;
	
	
	printf("\nRetangulo 01 Ponto inferior esquerdo, valor de X1:  ");
	scanf("%d", &Ax1);
	printf("\nRetangulo 01 Ponto inferior esquerdo, valor de Y1:  ");
	scanf("%d", &Ay1);
	printf("\nRetangulo 01 Ponto superior direito, valor de X2:  ");
	scanf("%d", &Ax2);
	printf("\nRetangulo 01 Ponto superior direito, valor de Y2:  ");
	scanf("%d", &Ay2);	
	printf("\nRetangulo 02 Ponto inferior esquerdo, valor de X1:  ");
	scanf("%d", &Bx1);
	printf("\nRetangulo 02 Ponto inferior esquerdo, valor de Y1:  ");
	scanf("%d", &By1);
    printf("\nRetangulo 02 Retangulo 02 Ponto superior direito, valor de X2:  ");
    scanf("%d", &Bx2);
    printf("\nRetangulo 02 Ponto superior direito, valor de Y2:  ");
    scanf("%d", &By2);
    
    int maxX = Bx1 - Ax1, miniX = Ax2 + Bx2, maxY = By1 - Ay1 , miniY = By2 + Ay2;
	
	int intervaloAX[Ax2 - Ax1 + 1],
    intervaloAY[Ay2 - Ay1 + 1],
    intervaloBX[Bx2 - Bx1 + 1],
    intervaloBY[By2 - By1 + 1];
    
    for(i = Ay1; i <= Ay2; i++){
    	intervaloAY[a] = i;
    	a++;
	}
	
	printf("\n");
	a = 0;
	
	for(i = Ax1; i <= Ax2; i++){
    	intervaloAX[a] = i;
    	a++;
	}
	
	printf("\n");
	a = 0;
	
	for(i = By1; i <= By2; i++){
    	intervaloBY[a] = i;
    	a++;
	}
	printf("\n");
	a = 0;
	
	for(i = Bx1; i <= Bx2; i++){
    	intervaloBX[a] = i;
    	a++;
	}
    
	
	for(b = 0; b <= Ax2 - Ax1; b++){
		for(c = 0; c <= Bx2 - Bx1; c++){
		    if(intervaloAX[b] == intervaloBX[c]){
			    if(maxX < intervaloAX[b]){
				maxX = intervaloAX[b];
			    }
			    if(miniX > intervaloAX[b]){
				miniX = intervaloAX[b];
			    }
		    }
	    }
    }
    
    for(b = 0; b <= Ay2 - Ay1; b++){
		for(c = 0; c <= By2 - By1; c++){
			if(intervaloAY[b] == intervaloBY[c]){
			    if(maxY < intervaloAY[b]){
				maxY = intervaloAY[b];
				
				
			    }
			    if(miniY > intervaloAY[b]){
				miniY = intervaloAY[b];
				
			    }
		    }
	    }
    }
    areaR = (maxX - miniX) * (maxY - miniY);
    printf("A area de intersecao A = %d", areaR);
	return 0;
	}