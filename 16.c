#include <stdio.h>

int lerNum() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    return num;
}
int main() {
    int num1 = lerNum();
    int num2 = lerNum();

    printf("Você digitou: %d e %d\n", num1, num2);

    return 0;
}