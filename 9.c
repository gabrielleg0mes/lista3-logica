#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma dos dois numeros e: %d\n", soma);

    system("pause");
    return 0;
}

