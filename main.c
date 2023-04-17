#include <stdio.h>
#include <math.h>

void sumaDosNumeros(void);//Declaracion de la funcion
void calculaRectangulo(void);//Declaracion de la funcion
void calculaRaices(void);//Declaracion de la funcion

int main(void){

    sumaDosNumeros();//Invocacion de la funcion
    printf("\n");
    calculaRectangulo();//Invocacion de la funcion
    printf("\n");
    calculaRaices();//Invocacion de la funcion
    printf("\n\n");

    return 0;
}

void sumaDosNumeros(void){//Definicion de la funcion
    float a,b,c;
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    c=a+b;
    printf("%f + %f = %f\n",a,b,c);
}
void calculaRectangulo(void){//Definicion de la funcion
    float base, altura, area, perimetro;
    printf("Dame base ");
    scanf("%f",&base);
    printf("Dame altura ");
    scanf("%f",&altura);

    area = base*altura;
    perimetro = 2*base + 2*altura;

    printf("base = %f\n",base);
    printf("altura = %f\n",altura);
    printf("area = %f\n",area);
    printf("perimetro = %f\n",perimetro);
}
void calculaRaices(void){//Definicion de la funcion
    float a, b, c, x1, x2;
    printf("Dame a ");
    scanf("%f",&a);
    printf("Dame b ");
    scanf("%f",&b);
    printf("Dame c ");
    scanf("%f",&c);

    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);
}














