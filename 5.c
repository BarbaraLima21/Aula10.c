#include <stdio.h>

void mensagem(int a, int b) {
    int resultado = a + b;
    
    printf("O resultado da soma é: %d\n", resultado);
    
    printf("Parabéns! Você realizou a soma com sucesso.\n");
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    mensagem(num1, num2);

    return 0;
}
