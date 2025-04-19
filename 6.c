#include <stdio.h>

double diametro(double raio) {
    return 2 * raio;
}

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    double d = diametro(r);

    printf("O diâmetro do círculo é: %.2f\n", d);

    return 0;
}
