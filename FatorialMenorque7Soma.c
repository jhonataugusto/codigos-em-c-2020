//fazer um programa em C que:

//1 : leia varios numeros inteiros e positivos OK
//2 : calcular e imprimir o fatorial OK
//3 : verificar se o numero é menor que 7 OK
//4 : somar de 1 até (n) que é o numero lido
//5 : sair quando for digitado -1

#include <stdio.h>

main(){
	
	int n,fat,i,soma;
	
	while(n>0){
		
		printf("digite um numero: \n");
		scanf("%d",&n);
		if(n>=0){
			system("cls");
	
			i = n;
			for(fat=1;i>1;i--){
			
				fat *= i;
			
			}	
			printf("fatorial de %d e: %d\n\n",n,fat);
		
			if(n>=7){
				printf("o numero e maior ou igual a 7\n\n");
			
			}else{
				printf("o numero e menor que 7\n\n");
			}
		
			for(i=1;i<=n;i++){
				soma += i;	
			}
			printf("a soma de todos os caracteres anteriores e de :%d \n\n",soma);
		
		} else if(!(n==-1)){
			system("cls");
			printf("Regra n 5: sair quando for digitado -1, voce digitou um numero negativo diferente de -1, saindo...\n\n");
		} else{
			system("cls");
			printf("voce digitou -1, saindo...");
		}
		
	
}

}
