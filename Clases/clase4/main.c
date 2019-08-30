#include <stdlib.h>
#include "Aritmetica.h"

//int funcion(int); esto es para las funciones sin void

int main()
{
    //int n1 =10;
    //int n2 = 8;
    //funcion(77);
    //printf("%d\n", n1);
    int edad = pedirEntero("Ingrese edad: ",1,100);
    int legajo = pedirEntero("Ingrese legajo: ",0,200);
    int nota = pedirEntero("Ingrese nota: ",1,10);
    int documento = pedirEntero("Ingrese documento:",0,10000);

    printf("%d--%d--%d--%d\n\n",edad,legajo,nota,documento);
    return 0;

}

/*int funcion ( int p)
{
    int a = 4;
    p =3;
    printf("%d",p);
}*/




//Es una recursiva de una manera de buscar el factorial, es eficaz pero no eficiente.
int factorial(int);
int main()
{
    int resultado;
    resultado = factorial(12);
    printf("El factorial es: %d", resultado);
    return 0;
}

int factorial(int numero)
{
    int resultado;

    if(numero ==0)
        {
            resultado = 1;
        }
    else
    {
        resultado = numero * factorial(numero-1);
    }
    return resultado;
}
