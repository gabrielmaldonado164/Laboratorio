#include "Aritmetica.h"
/*void funcion(int x)
{
    printf("%d",x);
}*/

int pedirEntero(char mensaje[], int min , int max)
{
    int unNumero;
    printf("%s",mensaje);
    scanf("%d",&unNumero);
    while(unNumero < min || unNumero>max)
        {
            printf("Error,\a %s", mensaje);
            scanf("%d",&unNumero);
        }
    return unNumero;
}
