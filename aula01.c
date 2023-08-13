#include <stdio.h>
#include <stdlib.h>

// int main () {

//    printf("Imprimindo o numero real: %.3f\n", 3.54670);
//    printf("Imprimindo uma string: %s \n ", "teste");
//    printf("Dado de texto: %c", 'b');
//}

int main() {
    int idade = 0;

    printf("Idade inicial: %d\n", idade);

    printf("Digite uma idade: ");
    scanf("%d", &idade);
    printf("A idade digitada foi: %d", idade);
}

