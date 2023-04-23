#include <stdio.h>
#include <math.h>

void sumaDosNumeros(void);//Declaracion de funcion
void calculaRectangulo(void);//Declaracion de funcion
void calculaRaices(void);//Declaracion de funcion

int main(void){
    int opcion;
    printf("1. Suma de dos numeros\n");
    printf("2. Rectangulo\n");
    printf("3. Raices\n");
    printf("Cual opcion quieres? ");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            sumaDosNumeros();//Invocacion de funcion
            break;
        case 2:
            calculaRectangulo();//Invocacion de funcion
            break;
        case 3:
            calculaRaices();//Invocacion de funcion
            break;
        default:
            printf("\nOpcion invalida!\n");
            break;
    }

    return 0;
}

void sumaDosNumeros(void){//Definicion de funcion
	float a, b, c;

	printf("\nIngresa a ");
	scanf("%f",&a);
	printf("Ingresa b ");
	scanf("%f",&b);

	c=a+b;

	printf("\n%f + %f = %f\n",a,b,c);
}
void calculaRectangulo(void){//Definicion de funcion
    float base, altura, area, perimetro;

    printf("\nDame base ");
    scanf("%f",&base);
    printf("Dame altura ");
    scanf("%f",&altura);

    area=base*altura;
    perimetro=2*base + 2*altura;

    printf("\nbase = %f\n",base);
    printf("altura = %f\n",altura);
    printf("area = %f\n",area);
    printf("perimetro = %f\n",perimetro);
}
void calculaRaices(void){//Definicion de funcion
    float a,b,c,x1,x2;

    printf("\nDame a ");
    scanf("%f",&a);
    printf("Dame b ");
    scanf("%f",&b);
    printf("Dame c ");
    scanf("%f",&c);

    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("\nx1 = %f\n",x1);
    printf("x2 = %f\n",x2);
}
