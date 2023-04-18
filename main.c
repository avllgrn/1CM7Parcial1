#include <stdio.h>
#include <math.h>

float sumaDosNumeros(float x, float y);
float calculaAreaRectangulo(float b, float h);
float calculaPerimetroRectangulo(float b, float h);
float calculaX1(float a, float b, float c);
float calculaX2(float a, float b, float c);

int main(void){
    float a,b,c,x1,x2;
    //1.Pide datos
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);
    x1 = calculaX1(a,b,c);
    x2 = calculaX2(a,b,c);
    //3.Muestra resultado
    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);
    return 0;
}

float sumaDosNumeros(float x, float y){
    float z;
    z = x+y;//2.Calcula formula
    return z;
}
float calculaAreaRectangulo(float b, float h){
    float a;
    a = b*h;
    return a;
}
float calculaPerimetroRectangulo(float b, float h){
    float p;
    p = 2*b + 2*h;
    return p;
}
float calculaX1(float a, float b, float c){
    float x1;
    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);//2.Calcula formula
    return x1;
}
float calculaX2(float a, float b, float c){
    float x2;
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);//2.Calcula formula
    return x2;
}
