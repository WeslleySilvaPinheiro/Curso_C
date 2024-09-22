#include <stdio.h>

int main(){
    
    int i, fatorial, numero;
    char opcao;
    
    do{
        i=1;
        fatorial=1;
        
        printf("Digite o numero: ");
        scanf("%d", &numero);
        
        while(i <= numero){
            fatorial *= i;
            i++;
        }
        
        printf("\nO fatorial de %d: %d", numero, fatorial);
        
        printf("\nDeseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &opcao);
        
    }while (opcao == 's' || opcao == 'S');
    
    return 0;
}
