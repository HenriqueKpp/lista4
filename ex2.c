#include<stdio.h>
#include<math.h>

float dstcia(float ax,float ay, float bx, float by){
float xx,yy;
xx = ax - bx;
yy = ay - by;
xx = xx *xx;
yy = yy * yy;
xx = yy + xx;
xx  = sqrt(xx);
return xx;
}






int main(){

float ax,ay,bx,by ,distancia;

printf("Escreva o valor X do ponto " " A "  ":\n" );
scanf("%f",&ax);
printf("Escreva o valor Y do ponto""A"":\n" );
scanf("%f",&ay);
printf("Escreva o valor X do ponto""B"":\n" );
scanf("%f",&bx);
printf("Escreva o valor Y do ponto""B"":\n" );
scanf("%f",&by);

distancia = dstcia(ax,ay,bx,by);
printf("\nDistancia dos pontos: %f",distancia);
    return 0;
}