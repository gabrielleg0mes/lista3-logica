#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float raio, area, pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    printf("A area do circulo e: %.2f\n", area);

    system("pause");
    return 0;
}

