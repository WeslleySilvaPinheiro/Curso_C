#include <stdio.h>
#include <locale.h>

int main(){

	float n1,p1=2,n2,p2=3,n3,p3=5,soma_nota,soma_pesos,calculo;

	printf("Digite a nota do laboratório:\n");
	scanf("%f",&n1);
	
	printf("Digite a nota da avaliação semestral:\n");
	scanf("%f",&n2);
	
	printf("Digite a nota do exame final:\n");
	scanf("%f",&n3);

	soma_nota = (n1*p1) + (n2*p2) + (n3*p3);
	soma_pesos = p1 + p2 + p3;
	calculo = soma_nota / soma_pesos; // poderia ter feito direto por 10.
	
	if(calculo >= 8){
  	    printf("A média do aluno foi de %.2f (A)",calculo);
	}else if (calculo >= 7){
		printf("A média do aluno foi de %.2f (B)",calculo);
	}else if (calculo >= 6){
		printf("A média do aluno foi de %.2f (C)",calculo);
	}else if (calculo >= 5){
		printf("A média do aluno foi de %.2f (D)",calculo);
	}else if (calculo <= 4,99){
		printf("A média do aluno foi de %.2f (E)",calculo);
	}
}
