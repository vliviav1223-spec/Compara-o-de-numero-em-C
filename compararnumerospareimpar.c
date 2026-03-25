#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1, num2;

    printf("Digite um numero:\n");
    scanf("%d", &num1);

    while (num1 < 0)
    {
        printf("Digite apenas numero positivos\n");
        printf("Digite o primeiro numero:\n");
        scanf("%d", &num1);
    }

    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

     while (num2 < 0)
    {
        printf("Digite apenas numero positivos\n");
        printf("Digite o segundo numero:\n");
        scanf("%d", &num2);
    }
    
    if (num1 % 2 == 0)
    {
        printf("O primeiro numero eh par\n");
    }
    
    else 
    {
        printf("O primeiro numero eh impar\n");
    }
    if (num2 % 2 ==0)
    {
       printf("O segundo numero eh par");
    }
    else
    {
       printf("O segundo numero eh impar");
    }
    
    
    return 0;

}
