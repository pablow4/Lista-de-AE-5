#include <stdio.h>

#define SOMA(a, b, c, d) (a + b + c + d)
#define MEDIA(soma) (soma / 4)

int main() {
    int num1, num2, num3, num4;
    float media;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto número: ");
    scanf("%d", &num4);
    
    media = MEDIA(SOMA(num1, num2, num3, num4));
    
    printf("A média dos quatro números é: %.2f\n", media);
    
    return 0;
}
