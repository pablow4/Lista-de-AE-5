#include <stdio.h>

#define SOMA(a, b, c, d) (a + b + c + d)
#define MEDIA(soma) (soma / 4)

int main() {
    int num1, num2, num3, num4;
    float media;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);
    
    media = MEDIA(SOMA(num1, num2, num3, num4));
    
    printf("A m�dia dos quatro n�meros �: %.2f\n", media);
    
    return 0;
}
