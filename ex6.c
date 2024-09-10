#include<stdio.h>


float medias(float n1, float n2, float n3, char tipo){
float media;

switch(tipo){
case 'A':
case 'a':

media = (n1 + n2 + n3)/3; 
return media;

break;
case 'H':
case 'h':

media = 3 / ((1/n1) + (1/n2) + (1/n3));


return media;

break;
case 'P':
case 'p':

media = ((n1 * 5) + (n2 * 3) + (n3 * 2))/10;
return media;


break;
}




    
}










int main(){
float n1,n2,n3, media;
char tipo;
printf("\nDigite a primeira nota: ");
scanf("%f",&n1);
printf("\nDigite a segunda nota: ");
scanf("%f",&n2);
printf("\nDigite a terceira nota: ");
scanf("%f",&n3);
printf("\nTipo de media que deseja realizar: 'P' - (ponderada) / 'A' - (aritmetica) / 'H' - (harmonica)");
scanf("%d");
scanf("%c",&tipo);

media = medias(n1,n2,n3,tipo);
printf("\nSua media final do tipo '%c' :%.2f ",tipo,media);


    return 0;
}