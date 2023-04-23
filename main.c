#include <stdio.h>
#include <math.h>

float sumaDosNumeros(float x, float y);//Declaracion de funcion
float calculaAreaRectangulo(float b, float h);//Declaracion de funcion
float calculaPerimetroRectangulo(float b, float h);//Declaracion de funcion
float calculaX1(float a, float b, float c);//Declaracion de funcion
float calculaX2(float a, float b, float c);//Declaracion de funcion

int main(void){
	float a,b,c,x1,x2,base,altura,area,perimetro;
    int opcion;
    printf("1. Suma de dos numeros\n");
    printf("2. Rectangulo\n");
    printf("3. Raices\n");
    printf("Cual opcion quieres? ");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            //1. Pide dato(s)
            printf("\nIngresa a ");
            scanf("%f",&a);
            printf("Ingresa b ");
            scanf("%f",&b);

            c=sumaDosNumeros(a,b);//Invocacion de funcion

            //3. Muestra Resultado(s)
            printf("\n%f + %f = %f\n",a,b,c);
            break;

        case 2:
            //1. Pide dato(s)
            printf("\nDame base ");
            scanf("%f",&base);
            printf("Dame altura ");
            scanf("%f",&altura);

            area=calculaAreaRectangulo(base,altura);//Invocacion de funcion
            perimetro=calculaPerimetroRectangulo(base, altura);//Invocacion de funcion

            //3. Muestra Resultado(s)
            printf("\nbase = %f\n",base);
            printf("altura = %f\n",altura);
            printf("area = %f\n",area);
            printf("perimetro = %f\n",perimetro);
            break;

        case 3:
            //1. Pide dato(s)
            printf("\nDame a ");
            scanf("%f",&a);
            printf("Dame b ");
            scanf("%f",&b);
            printf("Dame c ");
            scanf("%f",&c);

            x1 = calculaX1(a,b,c);//Invocacion de funcion
            x2 = calculaX2(a,b,c);//Invocacion de funcion

            //3. Muestra Resultado(s)
            printf("\nx1 = %f\n",x1);
            printf("x2 = %f\n",x2);
            break;

        default:
            printf("\nOpcion invalida!\n");
            break;
    }

    return 0;
}

float sumaDosNumeros(float x, float y){//Definicion de funcion
    float z;
    z = x+y;//2.Calcula formula(s)
    return z;
}
float calculaAreaRectangulo(float b, float h){//Definicion de funcion
    float a;
    a = b*h;//2.Calcula formula(s)
    return a;
}
float calculaPerimetroRectangulo(float b, float h){//Definicion de funcion
    float p;
    p = 2*b + 2*h;//2.Calcula formula(s)
    return p;
}
float calculaX1(float a, float b, float c){//Definicion de funcion
    float x1;
    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);//2.Calcula formula(s)
    return x1;
}
float calculaX2(float a, float b, float c){//Definicion de funcion
    float x2;
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);//2.Calcula formula
    return x2;
}
