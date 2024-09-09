#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // acentua��o
// programa para ler dois n�meros, adiciona-los e apresentar o resultado.
// programa adicional n�meros

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,x;
    printf("Digite o numero 1: ");
    scanf("%d",&a);
    printf("Digite o numero 2: ");
    scanf("%d",&b);
    x=a+b;
    printf("A soma dos numeros � %d", x);
    return 0;
}
