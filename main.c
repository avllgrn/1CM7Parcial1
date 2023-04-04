#include <stdio.h>

void suma(void);//Declaracion de la funcion

int main(void){
    suma();//Invocacion de funcion
    return 0;

}

void suma(void){//Definicion de la funcion
    float a,b,c;
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    c=a+b;
    printf("%f + %f = %f\n",a,b,c);
}
