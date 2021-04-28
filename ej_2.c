#include <stdio.h>

int main() {
	int ingreso = 0, suma_pares = 0, suma_impares = 0, i;
	
	for(i = 0; i < 10; i++){
		
		printf("Ingresa el numero %d: ", (i+1));
		
		scanf("%d", &ingreso);
		
		if(ingreso % 2 == 0){
			
			suma_pares = suma_pares + ingreso;
			
		}else{
			
			suma_impares += ingreso;
			
		}
	}
	
	printf("\nLa suma de numeros pares es %d, y de impares %d", suma_pares, suma_impares);
	
	if(suma_pares > suma_impares){
		
		printf("\nLa suma de numeros pares es mayor que la de impares\n");
		
	}else if(suma_pares == suma_impares){
		
		printf("\nLa suma de numeros pares es igual que la de impares\n");
		
	}else{
		
		printf("\nLa suma de numeros impares es mayor que la de pares\n");
		
	}
	
	return 0;
}
