#include <stdio.h>
#include <math.h>
/*

5) Escreva um programa em C que crie um vetor de 10 posi��es de inteiros. Em cada
posi��o deve ser armazenado o quadrado do �ndice referente � posi��o. Ao final, o
programa deve imprimir o vetor resultante.

*/

main(){
	int i,vector[10];
	for(i=0;i<10;i++){
		vector[i] = i^2;
	}
	for(i=0;i<10;i++){
		printf("%d \t",vector[i]);
	}
}
