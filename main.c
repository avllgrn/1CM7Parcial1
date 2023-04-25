#include <stdio.h>
#include <math.h>

int muestraMenuPideOpcion(void);
float convierteARadianes(float xGrados);
void calculaSenoVacia(void);
float calculaSeno(float xGRados);
void calculaCosenoVacia(void);
float calculaCoseno(float xGRados);
void calculaTangenteVacia(void);
float calculaTangente(float xGRados);

int main(void){
    switch( muestraMenuPideOpcion() ){
        case 1:
            calculaSenoVacia() ;
            break;
        case 2:
            calculaCosenoVacia();
            break;
        case 3:
            calculaTangenteVacia();
            break;
        default:
            printf("Opcion invalida =^(");
            break;
    }
    return 0;
}

int muestraMenuPideOpcion(void){
    int opcion;
    printf("1. Seno\n");
    printf("2. Coseno\n");
    printf("3. Tangente\n");
    printf("Cual opcion quieres? ");
    scanf("%d",&opcion);
    return opcion;
}
float convierteARadianes(float xGrados){
    return xGrados*M_PI/180;
}
void calculaSenoVacia(void){
    float xGrados, seno;
    printf("Ingresa grados ");
    scanf("%f",&xGrados);
    seno = calculaSeno(xGrados);
    printf("seno(%f) = %f\n",xGrados,seno);
}
float calculaSeno(float xGRados){
    float xRadianes;
    xRadianes = convierteARadianes(xGRados);
    return sin(xRadianes);
}
void calculaCosenoVacia(void){
    float xGrados, coseno;
    printf("Ingresa grados ");
    scanf("%f",&xGrados);
    coseno = calculaCoseno(xGrados);
    printf("coseno(%f) = %f\n",xGrados,coseno);
}
float calculaCoseno(float xGRados){
    float xRadianes;
    xRadianes = convierteARadianes(xGRados);
    return cos(xRadianes);
}
void calculaTangenteVacia(void){
    float xGrados, tangente;
    printf("Ingresa grados ");
    scanf("%f",&xGrados);
    tangente = calculaTangente(xGrados);
    printf("tangente(%f) = %f\n",xGrados,tangente);
}
float calculaTangente(float xGRados){
    float xRadianes;
    xRadianes = convierteARadianes(xGRados);
    return tan(xRadianes);
}
