#include <stdio.h>
/*

2) Escreva um programa em C que crie um vetor de inteiros de 10 posições, leia os valores
a serem armazenados em cada uma das posições do teclado. Ao final, imprima o vetor
em ordem inversa

*/
main(){
	
	
	int i,vector[10];
	
	for(i=9;i>=0;i--){
		printf("input a number");
		scanf("%d",&vector[i]);
	}
	
	printf("numbers that the computer read: %d %d %d %d %d %d %d %d %d %d",vector[0],vector[1],vector[2],vector[3],vector[4],vector[5],vector[6],vector[7],vector[8],vector[9]);	
}
