#include <stdio.h>
#include <stdlib.h>

//--------------------------EX2--------------------
//receber 3 valores diferentes e multiplicar o menor valor por 10, o maior por 30 e o outro por 20

void multiplica(int *pa,int *pb,int *pc)
{
int a,b,c;
a=*pa;
b=*pb;
c=*pc;

if (a>b && a>c)//a e maior
    if(b>c){
    *pa=*pa *30;
    *pb=*pb *20;
    *pc=*pc *10;

}else {
    *pa=*pa *30;
    *pb=*pb *10;
    *pc=*pc *20;
}else {
    if(b>c)
        if(a>c){
            *pa=*pa *20;
            *pb=*pb *30;
            *pc=*pc *10;
            }else{
                *pa=*pa *10;
                *pb=*pb *30;
                *pc=*pc *20;
            }else{
                if(a>b){
                    *pa=*pa *20;
                    *pb=*pb *10;
                    *pc=*pc *30;
                }else{
                   *pa=*pa *10;
                    *pb=*pb *20;
                    *pc=*pc *30;

            }
        }
}



}

void main(){
int a,b,c;
printf("A=");
scanf("%d",&a);
printf("B=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);

printf("\n Valores inseridos: %d %d %d",a,b,c);
multiplica(&a,&b,&c);
printf("\nDepois da funcao\nValores a= %d b= %d c= %d",a,b,c);


}
