#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor;
    float soma = 0;
    int opcao;

    do
    {
        printf("Digite uma opcao para realizar a operacao: \n");
        printf("1. Deposito \n");
        printf("2. Saque \n");
        printf("3. Saldo \n");
        printf("4. Sair \n");
        scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor a ser depositado: \n");
        scanf("%f", &valor);
        soma = soma + valor;
        printf("Saldo total e de: %.2f \n", soma);
        break;
    case 2:
        printf("Digite quanto quer sacar: \n");
        scanf("%f", &valor);
        
        if (valor < soma)
        {
            printf("Saldo insuficiente, tente novamente \n");
        }
        else {
            printf("Voce sacou %.2f de sua conta \n", valor);
        };
        break;
    
    case 3:
        printf("Seu saldo total e: %.2f \n", soma);
        break;
    default: if (opcao!=4)
        printf("Opcao invalida \n");
        break;
    }

    }

    while(opcao!=4);
        printf("Fim das operacoes");
        system("pause");
        return 0;

    

}