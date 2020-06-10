/* Datos de entrada
    Ingrese los votos
   Proceso 
    Se imprime el menun
    se lee la opcion del menu
    entra al ciclo 
    si elige la opcion 1 entra al ingreso de votos
    si elge la opcion 2 entra al calulo de votos
    si elge la opcion tres sale del ejercicio
   Datos de salida 
    se imprime el numero de votos de cada personaje y el porcentaje 

*/
#include<stdio.h>//esta la bibliotes
#include<stdlib.h>//esta biblioteca
void ingresavotos(int []);//la una funcion
void CalculodeVotos(int []);//la otra funcion
void main()//la funcion main
{
    int o=1,op,n=1,votos[n];//la variables
    do//do
    {
        printf("\n\tMenu\n1.Ingrese su voto\n2.Impresion de votos\n3.salir\n");//el menu
        scanf("%d",&op);//se escanea
        switch(op)//el switch
        {
            case 1://case 1
            { 
                printf("Inserte 1 para el candidato 1 asi sucesivamente hasta el candidato 5\n cuando ingrese cero se acaba el conteo de votos\n");//este mensaje
                ingresavotos(votos);//se llama a la funcion
                system("pause");//se pausa el programa
                system("cls");//se elimina lo que se imrimi
            }
            break;//se rompe 
            case 2://case 2
            {
                CalculodeVotos(votos);//se llama a la funcion
                system("pause");//se pausa el programa
                system("cls");//se elimina lo que se imrimi
            }
            break;//se rompe
            case 3://case 3
            {
                printf("\nel porgrama finalizo");//fin del programa
                o=0;//se declara valor
            }
            break;//rompe este valor
            default://este es si opcion no vale
            {
                printf("valor invalido");//se imprime
            }
        }
    }while(o==1);//menu repetitivo
}

void ingresavotos(int votos[])//funcin
{
    int i;//declaracion de funciones
    for(i=1;i!=0;i++)//for
    {
        printf("Ingrese su voto: \n");//se imprime esto
        scanf("%d",&votos[i-1]);// se escanea esto
        while(votos[i-1]>5||votos[i-1]<0)//entra a la validacion
        {
            printf("Ingrese su voto menor que 5 y mayor que cero: \n");//se imprime este linea
            scanf("%d",&votos[i-1]);//se lee esta linea
        }
        if(votos[i-1]==0)//para que termine el ciclo
        {
            i=-1;//para que termine el ciclo
        }
        //se suma un contador
    }
}

void CalculodeVotos(int votos[])//otra funcion
{
    int i,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,num=0;//se declara esta linea
    float por1=0,por2=0,por3=0,por4=0,por5=0;num=0;//se declara esta linea
    for(i=0;votos[i]!=0;i++)//entra este for
    {
        if(votos[i]==1)//se verifica 
        {
            cont1=cont1+1;//se suma
        }
        else if(votos[i]==2)//se verifica
        {
            cont2=cont2+1;//se suma
        }
        else if(votos[i]==3)//se verifica
        {
            cont3=cont3+1;//se suma
        }
        else if(votos[i]==4)//se verifica
        {
            cont4=cont4+1;//se suma
        }
        else if(votos[i]==5)//se  verifica
        {
            cont5=cont5+1;//se suma
        }
        num=num+1;//se suma
    }
    por1=cont1*(100/num);//se hace el porcentaje
    por2=cont2*(100/num);//se hace el porcentaje
    por3=cont3*(100/num);//se hace el porcentajje
    por4=cont4*(100/num);//se hace el porcentaje
    por5=cont5*(100/num);//se hace el porcentaje

    printf("\nEl numero de votos que obtuvo el candidato uno es: %d y el porcentaje es %.2f\n",cont1,por1);//se imprime
    printf("El numero de votos que obtuvo el candidato dos es: %d y el porcentaje es %.2f\n",cont2,por2);//se imprime
    printf("El numero de votos que obtuvo el candidato tres es: %d y el porcentaje es %.2f\n",cont3,por3);//se imprime
    printf("El numero de votos que obtuvo el candidato cuantro es: %d y el porcentaje es %.2f\n",cont4,por4);//se imprime
    printf("El numero de votos que obtuvo el candidato cinco es: %d y el porcentaje es %.2f\n",cont5,por5);//se imprime

}
