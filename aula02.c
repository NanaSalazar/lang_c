#include <stdio.h>
#include <stdlib.h>

int main () {
    float idade;

    printf("Digite sua idade: ");
    scanf("%f", &idade);

    if (idade < 18)
    {
        printf("Voce e menor de idade");
    }

    return printf("Voce e maior de idade");


}