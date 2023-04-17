#include <stdio.h>

float sumaDosNumeros(float x, float y);

int main(void){
    float a,b,c;

    //1.Pide datos
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);

    c = sumaDosNumeros(a,b);

    //3.Muestra resultado
    printf("%f + %f = %f\n",a,b,c);

    return 0;
}

float sumaDosNumeros(float x, float y){
    float z;
    z = x+y;//2.Calcula formula
    return z;
}
