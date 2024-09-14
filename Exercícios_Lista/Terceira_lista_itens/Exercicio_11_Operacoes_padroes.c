#include <stdio.h>
#include <math.h>

int main(){
	
	int escolha;
	double raiz;
	int soma, sub, multi, divisao, elevado, resto;
	int n1,n2;
	
	printf("Escolha uma das opções abaixo\n");
	printf("\n\t1 - Soma"
			"\n\t2 - Subtraçao"
			"\n\t3 - Multiplicacao"
			"\n\t4 - Divisao"
			"\n\t5 - Elevar a um numero"
			"\n\t6 - Raiz de qualquer indice"
			"\n\t7 - Resto"
			"\n\t8 - Sair");
	printf("\n\tEscolha:");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("\nSoma");
			printf("\n\tEscolha o primeiro numero: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha o segundo numero: ");
			scanf("%d", &n2);
			
			printf("\n\tA soma entre %d + %d = %d", n1,n2, n1+n2);
			break;
		
		case 2:
			printf("\nSubtracao");
			printf("\n\tEscolha o primeiro numero: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha o segundo numero: ");
			scanf("%d", &n2);
			
			printf("\n\tA subtracao entre %d - %d = %d", n1,n2, n1-n2);
			break;
			
		case 3:
			printf("\nMultiplicacao");
			printf("\n\tEscolha o primeiro numero: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha o segundo numero: ");
			scanf("%d", &n2);
			
			printf("\n\tA multiplicacao entre %d * %d = %d", n1,n2, n1*n2);
			break;
		
		case 4:
			printf("\ndivisao");
			printf("\n\tEscolha o primeiro numero: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha o segundo numero: ");
			scanf("%d", &n2);
			if(n2 == 0){
				printf("\n\tNao existe divisao por 0.");
			}else{
				printf("\n\tA divisao entre %d / %d = %d", n1,n2, n1/n2);
			}
			break;
		
		case 5:
			printf("\nElevar");
			printf("\n\tEscolha o numero: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha numero para elevar: ");
			scanf("%d", &n2);
			
			elevado = pow(n1,n2);
			
			printf("\n\tO numero %d elevado a %d = %d", n1,n2, elevado);
			break;
		
		case 6:
			printf("\nRaiz de qualquer indice");
			printf("\n\tEscolha o numero da raiz: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha o indice: ");
			scanf("%d", &n2);
			
			raiz = pow(n1, 1.0 / n2);
			
			printf("\n\tA raiz do numero %d ao indice %d = %.2f", n1,n2, raiz);
			break;
		
		case 7:
			printf("\nResto");
			printf("\n\tEscolha o primeiro numero: ");
			scanf("%d", &n1);
			
			printf("\n\tEscolha o segundo numero: ");
			scanf("%d", &n2);
			
			resto = n1 % n2;
			
			printf("\n\tO resto entre os numeros %d e %d = %d", n1,n2, resto);
			break;
		
		case 8:
			printf("\n\tSaindo do sistema...");
			break;
			
		default:
			printf("\n\tNumero invalido");
	}
}
