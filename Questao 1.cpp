#include <stdio.h>

#define SOMAR(a, b) (a + b)
#define SUBTRAIR(a, b) (a - b)
#define DIVIDIR(a, b) (a / b)
#define MULTIPLICAR(a, b) (a * b)

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", SOMAR(num1, num2));
    printf("Subtração: %d\n", SUBTRAIR(num1, num2));
    printf("Divisão: %d\n", DIVIDIR(num1, num2));
    printf("Multiplicação: %d\n", MULTIPLICAR(num1, num2));

    return 0;
}
