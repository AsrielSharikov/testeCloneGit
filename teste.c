#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Sua idade menos 1: %d\n", (idade - 1));

    return 0;
}