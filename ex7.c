#include <stdio.h>
#include<stdbool.h>

bool teste (int num){
int tipo;
tipo  = num % 2 ==0 ? 1 : 0;


return tipo;
}



int main(){
int num;
int resultado;

printf("\n\n*****Descubra se um numero inteiro e par ou impar***** \n");
printf("***** 1  = PAR / 0 = IMPAR********");
printf("\n\nDigite o numero inteiro: ");
scanf("%d",&num);
resultado = teste(num);
printf("Valor retornado: %d",resultado);



    return 0;
}