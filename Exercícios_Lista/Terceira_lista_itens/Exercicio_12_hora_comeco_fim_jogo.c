#include <stdio.h>

int main(){
	
	int hora_comeco, minuto_comeco, hora_final, minuto_final;
	int minutos_inicial, minutos_fim, duracaominutos, duracaohoras;
	
	printf("Digite a hora inicial do jogo Hora Minuto:");
	scanf("\n\t%d %d", &hora_comeco,&minuto_comeco);
	
	printf("Digite a hora final do jogo Hora Minuto:");
	scanf("\n\t%d %d", &hora_final,&minuto_final);
	
	minutos_inicial = hora_comeco * 60 + minuto_comeco;
	minutos_fim = hora_final * 60 + minuto_final;
	
	if(minutos_fim >= minutos_inicial){
		duracaominutos = minutos_fim - minutos_inicial;
	} else {
		duracaominutos = (24 * 60 - minutos_inicial) + minutos_fim;
	}
	
	duracaohoras = duracaominutos / 60;
	duracaominutos = duracaominutos % 60;
	
	printf("\n\tDuracao do jogo: %d horas e %d minutos\n", duracaohoras, duracaominutos);
}

