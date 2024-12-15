#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero, quadrado, cubo;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("O quadrado de %d e: %d\n", numero, quadrado);
    printf("O cubo de %d e: %d\n", numero, cubo);

    system("pause");
    return 0;
}

