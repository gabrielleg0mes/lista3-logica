#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, subtracao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    subtracao = num1 - num2;
    printf("A subtracao dos dois numeros e: %d\n", subtracao);

    system("pause");
    return 0;
}

