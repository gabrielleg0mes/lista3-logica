#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario base: ");
    scanf("%f", &salario_base);

    printf("Digite a gratificacao: ");
    scanf("%f", &gratificacao);

    printf("Digite o imposto (em porcentagem): ");
    scanf("%f", &imposto);

    salario_liquido = salario_base + gratificacao - (salario_base * (imposto / 100));
    printf("Salario Liquido: %.2f\n", salario_liquido);

    system("pause");
    return 0;
}

