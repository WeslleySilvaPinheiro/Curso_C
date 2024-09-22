#include <stdio.h>
#include <math.h>

int main(){
	
	double n, k, k_anterior, i=12, a=0, tolerancia= 0.000001; //double para precisão
	
	printf("Digite qual raiz quer saber: ");
	scanf("%lf", &n);
	
	printf("\n\tA raiz de %.2lf: %.2lf", n, sqrt(n));
	
	k = n /2.0;
	
	do{
		k_anterior = k; //armazenar o k anterior
		k = 0.5 * (k_anterior + n / k_anterior);
	} while ((k - k_anterior > tolerancia) || (k_anterior - k > tolerancia));
	
	printf("\n\tAproximacao da raiz quadrada de %.2lf: %.6lf\n", n, k);
}
