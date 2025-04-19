#include <stdio.h>

double circunferencia(double raio) {
    const double Pi = 3.14159;
    return 2 * Pi * raio;
}

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    double resultado = circunferencia(r);

    printf("A circunferência do círculo é: %.2lf\n", resultado);

    return 0;
}
