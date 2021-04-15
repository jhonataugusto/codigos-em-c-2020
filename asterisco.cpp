#include <stdio.h>
/*

1) Faça um programa que pega um número do teclado e imprime na tela esse número de
asteriscos. Ex: o usuário digita 7 e o programa imprime *******.


*/
main(){
	int n,i,j;
	printf("por favor, digite um numero:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
