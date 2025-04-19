#include <stdio.h>

int lerNum() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    return numero;
}

int main() {
    int valor = lerNum();

    printf("Você digitou: %d\n", valor);

    return 0;
}
