#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    int resultado = soma(num1, num2);

    printf("A soma é: %d\n", resultado);

    return 0;
}
