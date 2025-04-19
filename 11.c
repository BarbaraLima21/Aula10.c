#include <stdio.h>

int igual(int x, int y) {
    
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int x, y;

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    int resultado = igual(x, y);
    
    printf("Os números são iguais? %d\n", resultado);

    return 0;
}
