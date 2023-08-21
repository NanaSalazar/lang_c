#include <stdio.h>
#include <stdlib.h>

int t1, t2;

int media() {
    int result = (t1 + t2) / 2;
    return result;
}

int main() {
    printf("\n Digite o primeiro valor: ");
    scanf("%d", &t1);
    printf("\n Digite o segundo valor: ");
    scanf("%d", &t2);
    printf("\n A media entre os valores e: %d", media());
}