#include <stdio.h>

int main(){
	
	float radio, perimetro, area;
	
	printf("Ingresa el radio del circulo: ");
	
	scanf("%f", &radio);
	
	perimetro = (2 * 3.1416) / radio;
	
	area = 3.1416 * pow(radio, 2);
	
	printf("El perimetro del circulo es: %.2f, y el area es: %.2f", perimetro, area);
	
	return 0;
}
