/*
crear un nombre que nos permita escoger un menu de opciones
1. mayor de edad
2.imc
3. Sueldo trabajador
*/
#include<stdio.h>
#include<math.h>
void main(){
	int op;
	float altura,peso,imc;
	float gradosC,gradosF,centigrados=0,farenheit=0;
	char nombre[50];
    int edad;
	printf("\t \t BIENVENIDO \n");
	printf("\t Menu de opciones : \n");
	printf(" 1.Mayor de edad \n 2.IMC \n 3.Conversor de temperatura ");
	printf("Escoja una de las opciones : \n");
	scanf("%d",&op);
	switch(op){
		case 1:printf("ingrese su nombre \n");
  	  			scanf("%s",nombre );
   		 		printf("ingrese su edad \n");
    			scanf("%i",&edad );
   				if(edad>=18){
   					printf("%s es mayor de edad \n",nombre);
				   } 
				else{
					printf("%s es menor de edad \n",nombre);
				}   
  		break;
  		case 2:printf("Ingrese su altura en metros \n" );
 				scanf("%f",&altura);
 				printf("Ingrese su peso en kilos \n" );
 				scanf("%f",&peso);
 				imc=peso/(pow(altura,2));
 				printf("el imc es %.2f \n",imc );
 				if(imc<18.5){
 				printf("Posee un peso bajo \n" );
 				}
				 else if(imc>=18.5 && imc<=24.9){
			 	printf("Posee un peso normal \n" );
	 			}		
				  else if(imc>=25 && imc<=29.9){
	 			printf("Posee un sobrepeso  \n" );
	 			}
				else if (imc>=30 && imc<=39.9 ){
	 			printf("tiene obesidad  \n" ); 		
				 }
				else {
				printf("tiene obesidad morvida  \n" );
				}
		break;
		case 3:
				printf("1. C a F\n2.F a C\n");
                printf("EScoja la opcion:");
                scanf("%d",&op);
                if(op==1)
                {
                        printf("Ingrese los grados centigrados:");
                        scanf("%f",&gradosC);
                        farenheit=(gradosC*9)/5+32;
                        printf("La conversion es: %.2f grados farenheit \n",farenheit);
                }
                else if(op==2)
                {
                        printf("Ingrese los grados farenheit:");
                        scanf("%f",&gradosF);
                        centigrados=(gradosF-32)*5/9;
                        printf("La conversion es: %.2f grados centigrados",centigrados);
                }
                break;
		default:
		printf("Opcion invalida \n" );
		break;				
		
	}
	
	
	
}
