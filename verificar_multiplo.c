#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1, num2;

    printf("Digite um numero inteiro não negativo:\n");
    
    while (scanf("%d", &num1) != 1 || num1 < 0)
    {
        printf("Valor invalido. Digite numero inteiro e positivo\n");
    }

    printf("Digite outro numero inteiro nao negativo:\n");

    while (scanf("%d", &num2) != 1 || num2 < 0)
    {
        printf("Valor invalido. Digite numero inteiro e positivo\n");
        scanf("%d", &num2);
    }

    if (num1 % num2 == 0)
    {
        printf("O primeiro numero eh multiplo do segundo");
    }
    else {
        printf("O primeiro numero nao eh multiplo do segundo");
    }
        
}