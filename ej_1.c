#include <stdio.h>

int main() {
	
	int ingreso = 0, conteo_pares = 0;
	
	while(ingreso >= 0){
		
		printf("Ingresa un numero (Negativo para finalizar): ");
		
		scanf("%d", &ingreso);
		
		if(ingreso >= 0){
			
			if(ingreso % 2 == 0){
				
				conteo_pares = conteo_pares + 1;
				
			}
			
		}
		
	}
	
	printf("\nPrograma finalizado. \nIngresaste %d numeros pares.", conteo_pares);
	
	
	
	return 0;
}
