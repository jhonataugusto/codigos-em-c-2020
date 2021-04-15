#include <stdio.h>

main(){
	
	//declarar as variaveis
	int numerolimite, i, i2;
	//pedir pro usuario digitar um numero
    printf("Digite um numero:");
    scanf("%d", &numerolimite);
	//fez as estruturas de repetições
    for(i=0; i < numerolimite; i++){

        for(i2=0; i2 <= i; i2++ ){
            printf("*");
		}

    printf("\n");

    }
    
}
