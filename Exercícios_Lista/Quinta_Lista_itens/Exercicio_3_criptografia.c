#include <stdio.h>

int main(){
	
	int numeros, comprimento=0;
	int n1,n2,n3,n4;
	int aux;
	char opc;
	
	do{
		
		printf("\nDigite um numero de 4 digitos: ");
		scanf("%d", &numeros);
		
		comprimento = 0;
		
		n1 = (numeros%10) + 7; // aqui peguei os dpigitos e fiz uma adição direta do 7 em cada um
		n2 = (numeros%100 / 10) + 7;
		n3 = (numeros%1000 / 100) + 7;
		n4 = (numeros%10000 / 1000) + 7;
		
		while(numeros != 0){ // esse while serve para pegar ir removendo cada digito dividindo por 10 e a cada iteração ir adicionando para fazer um contador;
			numeros /= 10;
			comprimento++; // o contador precisa ser 4 então aqui nos vamos tirando cada um totalizando 4 no final
		}
		
		if(comprimento == 4){ // se o comprimento for 4 então temos a entrada correta e fazemos a criptografia com as trocas 
			printf("\n\tNumeros dentro do esperado.");
			printf("\n\t%d %d %d %d", n4, n3, n2, n1); // aqui printamos a senha padrão somente para poder confirmar a execução do programa
			
			aux = n3;
			n3 = n1;
			n1 = aux;
			
			aux = n2;
			n2 = n4;
			n4 = aux;
			
			printf("\n\tSenha criptografada."); // aqui printamos a nova criptografia com as trocas 
			printf("\n\t%d %d %d %d", n4, n3, n2, n1);
			
		}else{
			printf("\nNumeros invalidos.\n");
		}
		
		printf("\n\nDeseja continuar [S/N]: "); // opção de quebrar o sistema será decidida aqui com o controle de continuar a condição do DO.
		scanf(" %c", &opc);
		
	}while(opc == 's' || opc == 'S');
	
	return 0;
	
}
