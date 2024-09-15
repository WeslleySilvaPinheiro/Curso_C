#include <stdio.h>

int main(){
	
	int l1,l2,l3;
	
	printf("Digite tres numeros A A A:");
	scanf("%d %d %d", &l1,&l2,&l3);
	
	if(l1 < l2 + l3 && l2 < l3 + l1 && l3 < l2 + l1){
		printf("Pode formar um triangulo.\n");
		if(l1 == l2 && l2 == l3){
			printf("Triangulo equilatero.");
		}else if(l1 == l2 || l2 == l3 || l3 == l1){
			printf("Triangulo isosceles.");
		}else if( l1 != l2 && l2 != l3 && l3 != l1){
			printf("Triangulo escaleno.");
		}
	}else{
		printf("Nao pode formar um triangulo.");
	}
}
