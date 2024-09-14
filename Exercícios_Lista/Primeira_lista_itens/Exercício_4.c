// Exercício 4

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x1,x2,y1,y2,soma_x,soma_y,elevado_x,elevado_y,resultado_soma;
	double distancia;
	
	printf("Informe na sequência x1, x2, y1 e y2: ");
	scanf("%d %d %d %d", &x1,&x2,&y1,&y2);
	
	soma_x = x2 - x1;
	soma_y = y2 - y1;
	
	elevado_x = soma_x * soma_x;
	elevado_y = soma_y * soma_y;
	
	resultado_soma = elevado_x + elevado_y;
	
	distancia = sqrt((double)resultado_soma);
	
	printf("A subtração de X:%d e Y:%d\n", soma_x,soma_y);
	printf("A distância entre os pontos é aproximadamente: %.2f", distancia);
}
