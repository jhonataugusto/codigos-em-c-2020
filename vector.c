#include <stdio.h>
/*

4) Escreva um programa em C que leia 10 valores referentes ao peso de usuários e
armazene em um vetor de floats de 10 posições. Ao final, o programa deve imprimir os
índices do vetor onde estão armazenados o maior e o menor peso lido

*/
main(){
	//Declaracao de variaveis
	int i;
	float greater=0,smaller=999999,vector[10];
	//estrutura de repeticao
	for(i=0;i<=9;i++){
		printf("input a weight: ");
		scanf("%f",&vector[i]);
		//condicao pra verificar se o numero vai ser o maior
		if(vector[i] > greater){
			greater = vector[i];
		} 
		//condicao para verificar se o numeroo vai ser o menor
		else if(vector[i] < smaller){
			smaller = vector[i];
		}
	}
	//resultado final
	printf("greatest weight captured : %f\n",greater);
	printf("smallest weight captured : %f\n",smaller);
	
}
