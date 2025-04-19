#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Iguais: sim\n");
    } else {
        printf("Iguais: nao\n");
        
        if (num1 > num2) {
            printf("Maior: %d\n", num1);
            printf("Menor: %d\n", num2);
        } else {
            printf("Maior: %d\n", num2);
            printf("Menor: %d\n", num1);
        }
    }

    return 0;
}