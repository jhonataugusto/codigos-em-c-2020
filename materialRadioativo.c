#include <stdio.h>
/*
6) Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, faça um programa em C para determinar a quantidade de segundos
necessários para que a massa se torne menor que 0,5 gramas.
*/
main(){
	
	
	float segundos, massa;
	printf("quantidade de gramas: ");
	scanf("%f",&massa);
	
	while(massa>=0.5){
		massa = massa - (massa/2);
		segundos += 50;
		
	}
	printf("quantidade de segundos necessarios para a massa ser perdida: %f",segundos);
	
}
