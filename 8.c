#include <stdio.h>

double area(double raio) {
    const double Pi = 3.14159;
    return Pi * raio * raio;
}

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    double resultado = area(r);

    printf("A área do círculo é: %.2f\n", resultado);

    return 0;
}
