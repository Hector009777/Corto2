#include <stdio.h>
#include <math.h>

struct plano{
	float x1;
	float x2;
	float y1;
	float y2;
}
coordenada;

int main(){
	float c;
	float pendiente;
	printf("Ingrese el valor de x1: ");
	scanf("%f",&coordenada.x1);
	printf("Ingrese el valor de x2: ");
	scanf("%f",&coordenada.x2);
	printf("Ingrese el valor de y1: ");
	scanf("%f",&coordenada.y1);
	printf("Ingrese el valor de y2: ");
	scanf("%f",&coordenada.y2);
	
	
    c=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    
	printf("La distancia es: %f",c);
	
	pendiente=y2-y1/x2-x1;
	//Ecuacion de la recta
	
	printf("La ecuacion de la recta es: y-%f=%f(x-%f)",coordenada.y1,pendiente,coordenada.x1);
	
	return 0;
}

