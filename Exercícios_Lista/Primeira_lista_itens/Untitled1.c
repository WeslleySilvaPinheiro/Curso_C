#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float nota_a, nota_b, nota_c, media, peso_a, peso_b, peso_c; 
    
    printf("Digite a primeira nota:\n"); 
    scanf("%f", &nota_a); 
    
    printf("Digite o peso da primeira nota (entre 0 e 10):\n"); 
    scanf("%f", &peso_a); 
    
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota_b); 
    
    printf("Digite o peso da segunda nota (entre 0 e 10):\n");
    scanf("%f", &peso_b); 
    
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota_c); 
    
    peso_c = 10 - peso_a - peso_b; // Calcula o peso da terceira nota
    
    // Calcula a média ponderada corretamente
    media = (nota_a * peso_a + nota_b * peso_b + nota_c * peso_c) / 10.0; 
    
    printf("O terceiro peso foi de: %.2f\n", peso_c);
    printf("A média ponderada foi de: %.2f\n", media);

    return 0;
}
