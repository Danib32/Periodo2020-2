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

**********************************************************************************
Crear un programa que genere la serie de los numeros pares.

Ingrese la cantidad de numeros:-3
Ingrese la cantidad de numeros:3
2
4
6



*******************************************************************************/
#include <stdio.h>
float sumaNumeros(int);
void pares(int);

int main()
{
    int op,cantNum;
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
                printf("La suma es %.1f\n",sumaNumeros(cantNum));    
            break;
            case 2:
            do
                {
                    printf("Ingrese la cantidad de numeros:");
                    scanf("%d",&cantNum);
                }while(cantNum<0);
                pares(cantNum);  
            
            break;
            default:
                printf("Intente nuevamente.Opcion invalida\n");
            break;
            
        }
    }
}

float sumaNumeros(int cant)
{
    int i=0;
    float numeros[cant],suma=0;
    while(i<cant)
    {
        printf("Ingrese el elemento:");
        scanf("%f",&numeros[i]);
        suma=suma+numeros[i];
        i++;
    }
    i=0;
    printf("Elementos del Arreglo\n");
    while(i<cant)
    {
        printf("Elemento[%d]=%.1f\n",i,numeros[i]);
        i++;
    }
 return suma;  
}

void pares(int cant)
{
    int i=0,par=0,numPar[cant];
    
    while(i<cant)
    {
        par=par+2;
        numPar[i]=par;
        printf("%d\n",numPar[i]);
        i++;
    }
    i=0;
    printf("Numeros Pares\n");
    while(i<cant)
    {
        printf("Elemento[%d]=%d\n",i,numPar[i]);
        i++;
    }
    
}
