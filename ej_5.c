#include <stdio.h>

int main(){
	int numero = 0, intentos = 0;
	
	while(numero != 1234 && intentos < 3){
		
		printf("Ingrese la clave: ");
		
		scanf("%d", &numero);
		
		intentos++;
		
	}
	
	if(numero == 1234){
		
		printf("Ingreso exitoso!!\n");
		
	}else{
		
		printf("Superaste tu limite de intentos, comunicate con 32323223\n");
		
	}
	
	
	return 0;
}
