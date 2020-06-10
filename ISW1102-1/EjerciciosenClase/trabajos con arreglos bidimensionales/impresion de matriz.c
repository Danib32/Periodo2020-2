/******************************************************************************

Crear un programa que permita inicializar los elementos de una matriz e imprima 
en pantalla.



*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define tam 50
void imprimeMatriz(float [][tam]);
void ingresoDatos(int,int,float[][tam]);
void imprimeNotas(int,int,float[][tam]);

void main()
{
    int op,cantEst,cantNotas;
    float numeros[][tam]={{1.5,2.5},{-1.2,7.0},{5.3,6.7}};
    float notas[tam][tam];
    while(op!=4)
    {
        printf("1.Inicializacion Matriz 1\n2.Ingreso Datos tanto notas como cantidad de estudiantes\n3.Impresion Notas\n4.Salir\n");
        printf("Escoja la opcion:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                    imprimeMatriz(numeros);
                system("pause");
            	system("cls");
            break;
            case 2:
                    do
                    {
                        printf("Ingrese la cantidad de Estudiantes:");
                        scanf("%d",&cantEst); 
                    }while(cantEst<0);
                    do
                    {
                        printf("Ingrese la cantidad de Notas:");
                        scanf("%d",&cantNotas);
                    }while(cantNotas<0);
                ingresoDatos(cantEst,cantNotas,notas);
                printf("Notas ingresadas con exito \n");
            system("pause");
            system("cls");      
            break;
            case 3:
                    imprimeNotas(cantEst,cantNotas,notas);  
                    system("pause");
            	system("cls");
            break;
            case 4:
                   printf("Adios"); 
                   system("pause");
            	system("cls");
            break;
            
            default:
                    printf("Opcion invalida\n");
                    system("pause");
            	system("cls");
            break;
            
        }
    }
}

void imprimeMatriz(float n[][tam])
{
    int i,j;
    printf("Elementos de la Matriz\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<2;j++)
        {
	        printf("%.1f\t",n[i][j]);
        }
        printf("\n");
    }
}

void ingresoDatos(int cantE,int cantN,float notas[][tam])
{
    int i,j;
    for(i=0;i<cantE;i++)
    {
          printf("\n******************************************************\n");
		printf("Estudiante #%d\n",i+1);
        for(j=0;j<cantN;j++)
        {
            printf("Ingrese la calificacion #%d :",j+1);
            scanf("%f",&notas[i][j]);
            while(notas[i][j]<0)
            {
                printf("Ingrese una calificacion positiva:");
                scanf("%f",&notas[i][j]);
            }
        }
          printf("\n******************************************************\n");
    }
}

void imprimeNotas(int cantE,int cantN,float notas[][tam])
{
    int i,j;
    float suma=0,prom=0;
    for(i=0;i<cantE;i++)
    {
        suma=0;
        printf("\n******************************************************\n");
        printf("Estudiante #%d\n",i+1);
        for(j=0;j<cantN;j++)
        {
            printf("Calificacion=%.1f\n",notas[i][j]);
            suma=suma+notas[i][j];
        }
        prom=suma/cantN;
        printf("El promedio es %.1f\n",prom);
        printf("\n******************************************************\n");
    }
}

