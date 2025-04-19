#include <stdio.h>

int maior(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(){
    int x, y;

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o primeiro número: ");
    scanf("%d", &y);

    int resultado = maior(x, y);

    printf("O número maior é: %d", resultado);

    return 0;
}