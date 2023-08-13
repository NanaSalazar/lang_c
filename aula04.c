#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorCompra, desc, total;
    char codigoDesc;

    printf("Digite o valor de sua compra: ");
    scanf("%f", &valorCompra);
    printf("Digite a letra correspondente ao desconto: ");
    printf("\n Cupom A");
    printf("\n Cupom B");
    printf("\n Cupom C \n");
    scanf("%s", &codigoDesc);

   switch (codigoDesc)
   {
   case 'A':
    desc = valorCompra *0.30;
    total = valorCompra - desc;
    printf("O seu desconto total foi de %.1f", desc);
    printf("O valor total de sua compra com desconto e de: %.2f", total);
    break;
    
    case 'B':
    desc = valorCompra* 0.20;
    total = valorCompra - desc;
    printf("O seu desconto total foi de %.1f", desc);
    printf("O valor total de sua compra com desconto e de: %.2f", total);
    break;

    case 'C':
    desc = valorCompra* 0.10;
    total = valorCompra - desc;
    printf("O seu desconto total foi de %.1f", desc);
    printf("O valor total de sua compra com desconto e de: %.2f", total);
    break;
   
   default:
    printf("Invalido");
   };

   return 0;
}