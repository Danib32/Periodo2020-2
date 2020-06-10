/******************************************************************************

Crear un programa que permita ingresar la cantidad de numeros reales almacenados
en un arreglo, realice la suma de dichos numeros e imprime sus elementos.

Ingrese la cantidad de numeros:-3
Ingrese la cantidad de numeros:3
Ingrese el numero:-1.4
Ingrese el numero:-2
Ingrese el numero:3.5

Elementos del Arreglos
Elemento[0]=-1.4
Elemento[1]=-2
Elemento[2]=3.5

Suma de los elementos:0.1


Ingrese la cantidad de numeros:-3
Ingrese la cantidad de numeros:3
2
4
6




*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define tam 20
float sumaNumeros(int,float[]);
void pares(int);

void main()
{
    int op,cantNum;
    float numeros[tam];
    while(op!=3)
    {
        printf("1.Suma Numeros\n2.Pares\n3.Salir\n");
        printf("Escoja la opcion:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                do
                {
                    printf("Ingrese la cantidad de numeros:");
                    scanf("%d",&cantNum);
                }while(cantNum<0);
                printf("La suma es %.1f\n",sumaNumeros(cantNum,numeros));    
            break;
            case 2:
                do
                {
                    printf("Ingrese la cantidad de numeros:");
                    scanf("%d",&cantNum);
                }while(cantNum<0);
                pares(cantNum);
            break;
            case 3:
                exit(0);
            break;
            
            
            
        }
    }
}

float sumaNumeros(int cant,float numeros[cant])
{
    float suma=0;
    int i=0;
    while(i<cant)
    {
        printf("Ingrese el elemento:");
        scanf("%f",&numeros[i]);
        suma=suma+numeros[i];
        i++;
    }
    i=0;
    while(i<cant)
    {
        printf("Elemento[%d]=%.1f\n",i,numeros[i]);
        i++;
    }
    return suma;
}

void pares(int cant)
{
    int par=0,numPar[cant],i=0;
    while(i<cant)
    {
        par=par+2;
        numPar[i]=par;
        printf("%d\n",numPar[i]);
        i++;
    }
}
  
