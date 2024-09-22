#include <stdio.h>
#include <math.h>

int main() {
    double x, soma = 0.0, termo;
    int n = 0, iteracao=0;
    long double fatorial = 1.0;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);

    do {
        termo = pow(-1, n) * pow(x, 2 * n) / fatorial;
        soma += termo;

        n++;
        fatorial *= (2 * n - 1) * (2 * n); 
        
		iteracao+=1;

    } while (termo > 0.000001 || termo < -0.000001);

    printf("Cosseno de %.7lf: %.7lf\n", x, soma);
    printf("\n\tQTD ITERACAO: %d", iteracao);
    
    return 0;
}
