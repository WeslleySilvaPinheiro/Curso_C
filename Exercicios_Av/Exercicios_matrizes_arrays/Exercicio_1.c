/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int num[10], i, mult[10];
	
	for(i=0;i<10;i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<10;i++){
		printf("%d ", num[i]);
	}
	
	//for(i=0;i<10;i++){
	//	mult[i] = num[i] * num[i];
	//}
	
	for(i=0;i<10;i++){
		mult[i] = pow(num[i], 2);
	}
	
	for(i=0;i<10;i++){
		printf("%d ", mult[i]);
	}
	return 0;
}
