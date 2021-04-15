#include <stdio.h>
/*
5) Faça um programa que leia um número N e imprima o seu fatorial

*/

main(){
	int n,f;
	printf("digite um numero: ");
	scanf("%d",&n);
	
	for(f=1;n>1;n--){
		f *= n;
	}
	
	printf("fatorial: %d",f);
}
