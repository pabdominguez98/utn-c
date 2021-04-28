#include <stdio.h>

int main(){
	
	int val_uno, val_dos, val_tres, promedio;
	
	printf("Ingrese el valor 1: ");
	
	scanf("%d", &val_uno);
	
	printf("Ingrese el valor 2: ");
	
	scanf("%d", &val_dos);
	
	printf("Ingrese el valor 3: ");
	
	scanf("%d", &val_tres);
	
	promedio = (val_uno + val_dos + val_tres) / 3;
	
	printf("El promedio de los valores ingresados es %d \n", promedio);
		
	return 0;
}
