#include <stdio.h>
/*
Faça um programa em C que imprima os 10 primeiros
 termos pares da série abaixo:
*/

main(){
	int i,n1=1,n2=1,soma;
	printf(" 0 ");
	printf(" %d ",n1);
	printf(" %d ",n2);
	for(i=3;i<10;i++){
		soma = n1 + n2;
		n1 = n2;
		n2 = soma;
		printf(" %d ",soma);
		
	}
	
}
