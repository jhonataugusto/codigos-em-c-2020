#include <stdio.h>

main(){
	
	int salario,perc,novo;
	printf("digite um salario:");
	scanf("%d",&salario);
	printf("digite o percentual de aumento");
	scanf("%d",&perc);
	
	novo = salario + salario*perc/100;
	
	printf("o novo salario e de %d com %d de aumento",novo,perc);
	
	
	
}
