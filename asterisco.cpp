#include <stdio.h>
/*

1) Fa�a um programa que pega um n�mero do teclado e imprime na tela esse n�mero de
asteriscos. Ex: o usu�rio digita 7 e o programa imprime *******.


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
