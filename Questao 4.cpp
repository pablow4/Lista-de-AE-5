#include <stdio.h>

#define MAIOR_IDADE 18

int main() {
    char nome[50];
    int idade;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= MAIOR_IDADE) {
        printf("%s eh maior de idade.\n", nome);
    } else {
        printf("%s eh menor de idade.\n", nome);
    }
    
    return 0;
}





