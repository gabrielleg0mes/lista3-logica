#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Erro: Divisao por zero nao permitida.\n");
    }

    system("pause");
    return 0;
}
}
