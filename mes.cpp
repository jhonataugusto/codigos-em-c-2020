#include <stdio.h>
/*

2) Construa um programa em C que o usu�rio informe um valor e o programa retorne o
m�s correspondente ao valor. Caso o valor informado n�o corresponda a um m�s retorne
"Esse valor n�o corresponde a um m�s"

*/
main(){
	int n;
	printf("por favor, informe um valor: ");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("janeiro");
		break;
		case 2:
			printf("fevereiro");
		break;
		case 3:
			printf("mar�o");
		break;
		case 4:
			printf("abril");
		break;
		case 5:
			printf("maio");
		break;
		case 6:
			printf("junho");
		break;
		case 7:
			printf("julho");
		break;
		case 8:
			printf("agosto");
		break;
		case 9:
			printf("setembro");
		break;
		case 10:
			printf("outubro");
		break;
		case 11:
			printf("novembro");
		break;
		case 12:
			printf("dezembro");
		break;
		default:
		printf("Esse valor n�o corresponde a um mes");
		break;
	}
	
	
	
	
}
