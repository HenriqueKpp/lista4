#include<stdio.h>


int SomaDivisores(int n1){
int soma = 0,i;

for(i=1;i<n1;i++){
if(n1 % i == 0){
soma += i;
}
}
    return soma;
}


int main(){
int n1,i,soma;

for(i=0;i<5;i++){
printf("\nEscreva 5 numeros inteiros (%d) : ",i+1);
scanf("%d",&n1);
soma = SomaDivisores(n1);
printf("\nSoma dos divisores de %d: %d",n1,soma);
}




    return 0;
}