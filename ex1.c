#include <stdio.h>


int maior(int a, int b){
if(a > b)
return b;
else 
return a;

}


int main(){

int a ,b, resultado;

printf("\nEscreva 2 numeros: ");
scanf("%d%d", &a ,&b);

resultado = maior(a,b);

printf("\nO menor numero: %d",resultado);







    return 0;
}