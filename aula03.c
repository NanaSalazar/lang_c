#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float orcamento;

    printf("Digite o valor de seu orcamento: ");
    scanf("%f", &orcamento);

    if (orcamento <= 10.000)
    {
        printf("O orcamento e de %f, portanto farao viagem nacional", orcamento);

    }
    else
    {
        printf("O orcamento e de %f, portanto farao viagem internacional", orcamento);
    }

}