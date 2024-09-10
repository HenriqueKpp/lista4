#include <stdio.h>

int teste (int num){
int tipo;
if(num < 0){
    tipo = -1;
        }else
            if(num>0){
                tipo = 1;
                    }else{
                        tipo = 0;
                        }
    return tipo;
}



int main(){
int num;
int resultado;

printf("\n\n*****Descubra se um numero e POSITIVO, NEGATIVO OU ZERO***** \n");
printf("***** 1  = POSITIVO / -1 = NEGATIVO / 0 = ZERO********");
printf("\n\nDigite o numero : ");
scanf("%d",&num);
resultado = teste(num);
printf("Valor retornado: %d",resultado);



    return 0;
}