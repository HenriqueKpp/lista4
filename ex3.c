#include<stdio.h>
#include <math.h>

int potencia(int base, int expoente){
int resultado;
resultado =pow(base,expoente);
return resultado;
}





int main(){

int expoente, base,resultado;


printf("Escreva o valor da base: ");
scanf("%d",&base);
printf("Escreva o valor do expoente: ");
scanf("%d",&expoente);

resultado = potencia(base,expoente);
printf("Resultado: %d",resultado);



    return 0;
}