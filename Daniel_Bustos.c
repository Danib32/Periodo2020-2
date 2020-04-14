/******************************************************************************
Realizar un programa que me permita ingresar mis datos y edad y los imprima en pantalla
*******************************************************************************/
#include <stdio.h>

void main()
{
    char nombre[50],apellido[50],pasatiempo[50],meta[520];
    int edad;
    printf("ingrese su nombre \n");
    scanf("%s",nombre );
    printf("ingrese su apellido \n");
    scanf("%s",apellido );
    printf("ingrese su edad \n");
    scanf("%i",&edad );
    printf("ingrese su pasatiempo favorito \n");
    scanf("%s",pasatiempo );
    printf("ingrese sus metas\n");
    scanf("%s",meta );
    printf("***************************************\n");
    printf("          BIBLIOGRAFIA PERSONAL\n       ");
    printf("***************************************************\n");
    printf("mi nombre es %s ",nombre);
    printf("y mi apellidos es  %s ",apellido);
    printf("y tengo %i de años de edad \n",edad);
    printf("ademas disfruto mucho de  %s  ,",pasatiempo);
    printf(" y mi meta y deseos en esta carrera son de : %s  ",meta); 
}


