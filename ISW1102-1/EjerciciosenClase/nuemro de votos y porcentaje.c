
#include <stdio.h>
void main(){
	
	int voto;
	float c1=0,c2=0,c3=0,c4=0,c5=0,ct=0,a1,a2,a3,a4,a5;
	printf("\t ingrese su voto por el cadidato que desea del 1 al 5 \n");
	printf("\t ingrese 0 para finalizar la votacion \n");
	do 
	{
		ct++;
		printf("usted es el votante numero %0.f ingrese su voto : ",ct);
		scanf("%d",&voto);
		if (voto==1){
			c1++;
		}
		else if(voto==2){
			c2++;
		}
		else if(voto==3){
			c3++;
		}
		else if(voto==4){
			c4++;
		}
		else if (voto==5){
			c5++;	
		}
		
		}while(voto !=0);
		
	printf("************************************************************************************** \n");
	printf("\t VOTACION FINALIZADA A CONTINUACION LOS RESULTADOS \n");
	printf(" VOTOS TOTALES %.0f \n",ct-1);
	printf("\n");
	printf("\n");
	printf("------------------------------------------------------------------------- \n");
	printf("votos para el candidato uno %.0f \n",c1);
	printf("porcentaje de apoyo para el candidato uno %.2f porciento \n",a1=(c1/(ct-1))*100);
	printf("\n");
	printf("\n");
	printf("------------------------------------------------------------------------- \n");
	printf("votos para el candidato dos %.0f \n",c2);
	printf("porcentaje de apoyo para el candidato dos %.2f porciento \n",a2=(c2/(ct-1))*100);
	printf("\n");
	printf("\n");
	printf("------------------------------------------------------------------------- \n");
	printf("votos para el candidato tres %.0f \n",c3);
	printf("porcentaje de apoyo para el candidato tres %.2f porciento \n", a3=(c3/(ct-1))*100);
	printf("\n");
	printf("\n");
	printf("------------------------------------------------------------------------- \n");
	printf("votos para el candidato cuatro %.0f \n",c4);
	printf("porcentaje de apoyo para el candidato cuatro %.2f porciento \n",a4=(c4/(ct-1))*100);
	printf("\n");
	printf("\n");
	printf("------------------------------------------------------------------------- \n");
	printf("votos para el candidato cinco %.0f \n",c5);
	printf("porcentaje de apoyo para el candidato cinco %.2f porciento \n",a5=(c5/(ct-1))*100);
	printf("\n");
	printf("\n");
	printf("------------------------------------------------------------------------- \n");
	printf("************************************************************************************** \n");
	
}
