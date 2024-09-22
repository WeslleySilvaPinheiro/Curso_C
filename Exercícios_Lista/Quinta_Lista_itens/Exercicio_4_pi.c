#include <stdio.h>

int main(){
	
	double i=0, n=4, numero=0, constante=4, m=3;
	int contador=2, termos_para_pi;
	
	do{
		if(contador %2 == 0){
			//printf("\nmenos");
			numero= constante / m ;
			n -= numero;
			printf("\n%.4f", numero);
		}else{
			//printf("\nmais");
			numero= constante / m ;
			n +=  numero;
			printf("\n%.4f", numero);
		}
		
		if (termos_para_pi == 0 && (int)(n * 100000) == 314159) {
            termos_para_pi = contador;
            break;
		}
		
		i++;
		m+=2;
		contador++;
		
	}while(i<150000);
	
	printf("\n\tcontador: %.f numero: %.4lf", i, n);

}
