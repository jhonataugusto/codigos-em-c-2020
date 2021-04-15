#include <stdio.h>
/*

3) Fazer um programa em C que leia vários números inteiros e positivos e calcule e
imprima o fatorial se o número é menor que 7 e a soma de 1 até o número lido se o número
é maior ou igual a 7. Sair quando for digitado –1.


*/
main(){
	int i,n=0,soma,f,s;
	for(;(!(n==-1));){
		//recebimento dos dados
		printf("por favor, digite um numero: ");
		scanf("%d",&n);
		//uma condição pra garantir que o resultado seja calculado apenas se for (resultado <> -1)
		if(!(n==-1)){
			if(n<7){
			system("cls");
			printf("o numero e menor que 7\n");
			/*substitui a variavel N para S, apenas para manter o valor da N original e fazer com que o S seja apenas
			exclusivamente para o fatorial
			*/
			s = n;
			for(f=1;s>1;s--){f*= s;}
			
			printf("fatorial: %d\n",f);
			system("pause");
			system("cls");		
		}	
		else if(n>=7){
			system("cls");
			printf("o numero e maior ou igual a 7\n");
			/*deixei a soma como 0, para toda vez que o looping for feito,
			a soma ser resetada para a memória não alocar o resultado de antes*/
			soma = 0;
			for(i=1;i<n;i++){soma += i;}
			
			printf("soma total: %d\n",soma);
			system("pause");
			system("cls");
			}	
	}	
}
}
