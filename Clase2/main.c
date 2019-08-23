#include <stdio.h>
#include <stdlib.h>


int main()
{
    int edad;
    char sexo;
    float altura;
    char seguir;
    int edadMaximaMasVieja;
    float alturaMujerMasVieja;
    int flagVieja;
    int edadMinima;
    float alturaPersonaMasJoven;
    int flagPersonaJoven;
    int edadHombreMasBajo;
    float minimaAltura;
    int flagPetiso;
    int acumuladorDeEdades;
    int contadorPersonas;
    float promedioPersonas;

    flagPersonaJoven = 0;
    flagVieja = 0;
    flagPetiso = 0;
    acumuladorDeEdades = 0;
    contadorPersonas =0;


    do
    {
        printf("Ingrese su edad: ", edad);
        scanf("%d",&edad);
        while(!(edad>0 && edad<100))
            {
                printf("Reingrese edad: ");
                scanf("%d",&edad);
            }
        printf("Ingrese la altura: ");
        fflush(stdin);
        scanf("%f",& altura);
        while(!(altura > 1 && altura<2))
            {
                printf("Reingrese la altura");
                scanf("%f",&altura);
            }
        printf("Ingrese su sexo:");
        fflush(stdin);
        scanf("%c",& sexo);
        sexo = tolower(sexo);
        while(!(sexo == 'f' || sexo == 'm'))
            {
                printf("Reingrese sexo:");
                scanf("%c",&sexo);
                sexo = tolower(sexo);
            }
        if(sexo == 'f')
            {
                if(flagVieja == 0 || edad>edadMaximaMasVieja)//esto es para evitar un if mas y hacerlo todo junto ya, es decir  para ver cuando se ingrese otro numero.
                    {
                       edadMaximaMasVieja = edad;
                       alturaMujerMasVieja = altura;
                       flagVieja++;
                    }
            }
        else //  ya que tengo validado el sex, realizo un else
        {
            if(flagPetiso ==0 || altura<minimaAltura)
                {
                    minimaAltura = altura;
                    edadHombreMasBajo = edad;
                    flagPetiso++;
                }
        }

        if(flagPersonaJoven == 0 || edad<edadMinima)
            {
                edadMinima = edad;
                alturaPersonaMasJoven = altura;
                flagPersonaJoven++;
            }
        contadorPersonas++;
        acumuladorDeEdades = acumuladorDeEdades + edad;


        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c",&seguir);

    }while(seguir == 's');

    promedioPersonas = (float)acumuladorDeEdades / contadorPersonas; //(float) convertirlo.

    printf("La altura de la mujer mas vieja es: %f \n", alturaMujerMasVieja);
    printf("La altura de la persona mas joven: %f \n", alturaPersonaMasJoven);
    printf("La edad del hombre mas bajo es: %d\n",edadHombreMasBajo);
    printf("El promedio es: %f\n", promedioPersonas);

    return 0;
}
