#include <stdio.h>
#include <stdlib.h>

//--------------------------EX2--------------------
//receber 3 valores diferentes e multiplicar o menor valor por 10, o maior por 30 e o outro por 20

void op_multiplica(int *pm ,int *pi ,int*pn){
*pm *= 30;
*pi *= 20;
*pn *= 10;

}


void multiplica(int *pa,int *pb,int *pc)
{
int a,b,c;
a=*pa;
b=*pb;
c=*pc;

if (a>b && a>c)//a e maior
    if(b>c){
    op_multiplica(pa,pb,pc);
}else {
      op_multiplica(pa,pb,pc);

}else {
    if(b>c)
        if(a>c){
           op_multiplica(pa,pb,pc);

            }else{
                  op_multiplica(pa,pb,pc);

                }else{
                    if(a>b){
                           op_multiplica(pa,pb,pc);

                    }else{
                          op_multiplica(pa,pb,pc);

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

printf("\n Valores inseridos: %d \t %d  \t %d",a,b,c);
multiplica(&a,&b,&c);
printf("\nDepois da funcao\nValores a= %d \t b= %d  \t c= %d",a,b,c);


}
