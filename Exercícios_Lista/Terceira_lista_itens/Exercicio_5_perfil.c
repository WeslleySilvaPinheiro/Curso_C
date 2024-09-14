#include <stdio.h>

int main(){
	
	int dia,mes,ano,dia_mes,ano_dia_mes,resto_1,resto_2,soma,resto;
	
	printf("Digite o dia, o mes e o ano: AA/AA/AAAA:\n");
	scanf("%d%d%d", &dia,&mes,&ano);
	
	dia_mes = (dia*100) + mes;
	ano_dia_mes = ano + dia_mes;
	resto_1 = ano_dia_mes % 100;
	resto_2 = ano_dia_mes / 100;
	soma = resto_1 + resto_2;
	resto = soma % 5;
	
	printf("%d/%d/%d", dia,mes,ano);
	printf("\n%d", dia_mes);
	printf("\n%d", ano_dia_mes);
	printf("\n%d + %d = %d", resto_1, resto_2,soma);
	printf("\n%d\n", resto);
	
	if(resto == 0){
		printf("Timido");
	}else{
		if(resto == 1){
			printf("sonhador");
		}else{
			if(resto == 2){
				printf("paquerador");
			}else{
				if(resto == 3){
					printf("Atraente");
				}else{
					if(resto == 4){
						printf("irresistivel");
					}
				}
			}
		}
	}

}
