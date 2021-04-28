#include <stdio.h>

int main() {
	int ingreso = 0, contador_23=0;
	
	while(ingreso != 235){
		
		printf("Ingresa un numero: ");
		
		scanf("%d", &ingreso);
		
		if(ingreso != 235){
			
			if(ingreso == 23){
				
				contador_23 = contador_23 +1 ; // = contador_23++
	
			}
			
		}
		
		
	}
	
	printf("Programa finalizado!\nEl numero 23 se ingreso %d veces\n", contador_23);
	
	
	return 0;
} 
