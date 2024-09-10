#include <stdio.h>
#include<stdlib.h>

int absoluto(int valor){
int absolut;

absolut = abs(valor);

    return absolut;
}

int main(){
int i, valor, resultado;


for(i=0;i<=4;i++){
printf("\nEscreva o valor para receber o valor absoluto(%d): ",i + 1);
scanf("%d",&valor);
resultado = absoluto(valor);
printf("\nResultado absoluto(%d): %d\n",i + 1, resultado);
}


    return 0;
}