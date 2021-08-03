#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main(){
	printf("Calculadora de la formula general\n Ingrese valores de A, B, C. \n\n");
	
	int opcion = 2;
    	int pregunta;
	float a,b,c,raiz,po,su,su1,iraiz,x1,x2,suma,resta;
	
	while(opcion != pregunta){	
	
	printf("Escriba el valor de A: ");
	scanf("%f",&a);
	printf("Escriba el valor de B: ");
	scanf("%f",&b);
	printf("Escriba el valor de C: ");
	scanf("%f",&c);
	su=4*a*c;
	su1=2*a;
	po=pow(b,2);
	iraiz=po-su;
	raiz=pow(iraiz,.5);
	suma=-b+raiz;
	resta=-b-raiz;
	x1=suma/su1;
	x2=resta/su1;
	printf("\nx1 es igual a: %f\n" ,x1);
	
	printf("x2 es igual a: %f\n",x2);
	printf("\nDesea calcular nuevamente?\n1- Si \n2- No\n Ingrese opcion:  ");
        scanf("%d", &pregunta);
}

	printf("\n Gracias por usar nuestra calculadora de la formula general");
	return 0;
	
	
	}
