#include <stdio.h>
/*

2) Construa um programa em C que o usuário informe um valor e o programa retorne o
mês correspondente ao valor. Caso o valor informado não corresponda a um mês retorne
"Esse valor não corresponde a um mês"

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
			printf("março");
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
		printf("Esse valor não corresponde a um mes");
		break;
	}
	
	
	
	
}
