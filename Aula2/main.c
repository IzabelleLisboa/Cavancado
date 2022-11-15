#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

/*
void calcula_perimetro_area(float r, float *p, float *a){
*p= 2*PI*r;
*a= PI*r*r;
return;
}
void main(){
float r,area=0,perimetro=0;

printf("Raio: ");
scanf("%f",&r);
calcula_perimetro_area(r,&perimetro,&area);
printf("\nPerimetro= %.2f  Area= %.2f",perimetro,area);
}*/

//--------------------------EX2--------------------
//receber 3 valores diferentes e multiplicar o menor valor por 10, o maior por 30 e o outro por 20

void multiplica(int *v1,int *v2,int *v3)
{

    printf("%d \t %d \t%d",*v1,*v2,*v3);


}

void main(){
int a,b,c,*ap,*bp,*cp;
a=1;
b=2;
c=3;
 *ap = &a;
 *bp = &b;
 *cp = &c;

//printf("%d \t %d \t %d",a,b,c);
multiplica(ap,bp,cp);


}
