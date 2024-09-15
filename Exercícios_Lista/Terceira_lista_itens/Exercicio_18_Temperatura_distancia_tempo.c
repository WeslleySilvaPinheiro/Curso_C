#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int escolha, hora, medidor;
	float temperatura, conversor;
	
	printf("Escolha uma opção de conversão:\n");
	
	printf("\n\t1 - Temperatura"
			"\n\t2 - Distância"
			"\n\t3 - Tempo");
	printf("\n\tEscolha: ");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("\n\tEscolha uma opção:\n");
			
			printf("\n\t1 - Celsius"
					"\n\t2 - Fahrenheit"
					"\n\t3 - Kelvin");
			printf("\n\tEscolha: ");
			scanf("%d", &escolha);
			
			if(escolha == 1){
				printf("\n\tCelsius ");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Fahrenheit"
						"\n\t2 - Kelvin");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = (temperatura * 9/5) + 32;
					printf("\n\tO valor convertido de Celsius para Fahrenheit: %.2f°", conversor);
				}else if(escolha == 2){
					conversor = temperatura + 273;
					printf("\n\tO valor convertido de Celsius para Kelvin: %.2f°", conversor);
				}	
				
			}if(escolha == 2){
				printf("\n\tFahrenheit ");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Celsius"
						"\n\t2 - Kelvin");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = (temperatura - 32) / 1.8;
					printf("\n\tO valor convertido de Fahrenheit para Celsius: %.2f°", conversor);
				}else if(escolha == 2){
					conversor = (temperatura + 459.67) / 1.8;
					printf("\n\tO valor convertido de Fahrenheit para Kelvin: %.2f°", conversor);
				}
				
			}if(escolha == 3){
				printf("\n\tKelvin ");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Celsius"
						"\n\t2 - Fahrenheit");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = temperatura - 273;
					printf("\n\tO valor convertido de Kelvin para Celsius: %.2f°", conversor);
				}else if(escolha == 2){
					conversor = 1.8 * (temperatura - 273.15) + 32;
					printf("\n\tO valor convertido de Kelvin para Fahrenheit: %.2f°", conversor);
				}
			}
			break;
			
		case 2:
			printf("\n\tEscolha uma opção:\n");
			
			printf("\n\t1 - Metros"
					"\n\t2 - Quilômetros"
					"\n\t3 - Milhas");
			printf("\n\tEscolha: ");
			scanf("%d", &escolha);
			
			if(escolha == 1){
				printf("\n\tMetros ");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Quilômetros"
						"\n\t2 - Milhas");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = temperatura / 1000;
					printf("\n\tO valor convertido de Metros para Quilômetros: %.2f Km", conversor);
				}else if(escolha == 2){
					conversor = temperatura / 1609.344;
					printf("\n\tO valor convertido de Metros para Milhas: %.6f Mi", conversor);
				}
				break;
				
			}if(escolha == 2){
				printf("\n\tQuilômetros");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Metros"
						"\n\t2 - Milhas");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = temperatura * 1000;
					printf("\n\tO valor convertido de Quilômetros para Metros: %.2f Km", conversor);
				}else if(escolha == 2){
					conversor = (temperatura * 1000) / 1609.344;
					printf("\n\tO valor convertido de Quilômetros para Milhas: %.3f Mi", conversor);
				}
				
			}if(escolha == 3){
				printf("\n\tMilhas ");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Metros"
						"\n\t2 - Quilômetros");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = temperatura * 1609.344;
					printf("\n\tO valor convertido de Milhas para Metros: %.2f M", conversor);
				}else if(escolha == 2){
					conversor = temperatura * 1609.344;
					printf("\n\tO valor convertido de Milhas para Quilômetros: %.2f Km", conversor);
				}
			}
			break;
		case 3:
			printf("\n\tEscolha uma opção:\n");
			
			printf("\n\t1 - Horas"
					"\n\t2 - Minutos"
					"\n\t3 - Segundos");
			printf("\n\tEscolha: ");
			scanf("%d", &escolha);
			
			if(escolha == 1){
				printf("\n\tHoras ");
				
				printf("\n\tDigite a quantidade de horas para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Minutos"
						"\n\t2 - Segundos");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = temperatura * 60;
					printf("\n\tO valor convertido de Horas para Minutos: %.2f Minutos", conversor);
				}else if(escolha == 2){
					conversor = (temperatura * 60) * 60;
					printf("\n\tO valor convertido de Horas para Segundos: %.2f Segundos", conversor);
				}
				break;
				
			}if(escolha == 2){
				printf("\n\tMinutos");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%f", &temperatura);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Horas"
						"\n\t2 - Segundos");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					conversor = temperatura / 60;
					printf("\n\tO valor convertido de Minutos para Horas: %.0f Horas", conversor);
				}else if(escolha == 2){
					conversor = temperatura * 60;
					printf("\n\tO valor convertido de Minutos para Segundos: %.2f Segundos", conversor);
				}
				
			}if(escolha == 3){
				printf("\n\tSegundos ");
				
				printf("\n\tDigite o valor para converter:");
				scanf("%d", &medidor);
				
				printf("\n\tEscolha entre:");
				printf("\n\t1 - Horas"
						"\n\t2 - Minutos");
						
				printf("\n\tEscolha: ");
				scanf("%d", &escolha);	
				
				if(escolha == 1){
					hora = (medidor / 60) / 60;
					printf("\n\tO valor convertido de Segundos para Horas: %d Horas", hora);
				}else if(escolha == 2){
					hora = medidor / 60;
					printf("\n\tO valor convertido de Segundos para Minutos: %d Minutos", hora);
				}
			}
			break;
		default:
			printf("\n\tNúmero inválido.");
	}
}
