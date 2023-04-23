#include <stdio.h>
#include <math.h>

int main(void){
    int opcion;
    printf("Opcion 1\n");
    printf("Opcion 2\n");
    printf("Opcion 3\n");
    printf("Cual opcion quieres? ");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            printf("\nSe ejecuta la opcion 1 =^)\n");
            break;
        case 2:
            printf("\nSe ejecuta la opcion 2 =^)\n");
            break;
        case 3:
            printf("\nSe ejecuta la opcion 3 =^)\n");
            break;
        default:
            printf("\nSe ejecuta la opcion default =^)\n");
            break;
    }

    return 0;
}
