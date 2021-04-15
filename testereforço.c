#include <stdio.h>
/*
1) Escreva um programa em C que crie um vetor de inteiros de 10 posições e armazene
em cada posição os 10 primeiros números naturais a partir do número 1. Ao final, o vetor
resultante deve ser impresso.


main(){
	
	int i,vector[10];
	
	for(i=0;i<10;i++){
		vector[i] = i;
		printf("%d\t",vector[i]);
	}	
}

*/

/*
2) Escreva um programa em C que crie um vetor de inteiros de 10 posições, leia os valores
a serem armazenados em cada uma das posições do teclado. Ao final, imprima o vetor
em ordem inversa.
Ex:
vetor lido: 21,45,67,48,33
vetor impresso: 33,48,67,45,21

main(){
	
	int i,scan,vector[10];
	
	for(i=0;i<=9;i++){
		printf("input a number : ");
		scanf("%d",&vector[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d\t",vector[i]);
	}
}

*/

/*

3) Escreva um programa em C que leia 10 valores do teclado e armazene em um vetor de
floats. Ao final, o programa deve imprimir a soma de todos os elementos do vetor.
1 passo : criar um vetor tipo float
2 passo : criar uma estrutura de repetição tipo scan
3 passo : somar todos os valores em uma variavel só

main(){
	
	float vector[10],sum;
	int i;
	
	for(i=0;i<10;i++){
		printf("input a number : ");
		scanf("%f",&vector[i]);
		sum += vector[i];
	}
	printf("sum of all numbers : %f ",sum);
}

*/

/*

4) Escreva um programa em C que leia 10 valores referentes ao peso de usuários e
armazene em um vetor de floats de 10 posições. Ao final, o programa deve imprimir os
(índices do vetor) onde estão armazenados o maior e o menor peso lidos.

main(){
	
	float vector[10],high=0,small=999999924;
	int i,high_index,small_index;
	
	for(i=0;i<9;i++){
		printf("input a weight: ");
		scanf("%f",&vector[i]);
		if(vector[i] > high){
			high = vector[i];
			high_index = i;
			printf("\nHIGHEST |%f| INDEX|%d|\n",high,high_index);
		}else if(vector[i] < small){
			small = vector[i];
			small_index = i;
			printf("\nSMALLEST|%f| INDEX|%d|\n",small,small_index);
		}
	}
	printf("small weight : %f and position : %d\n",high,high_index);
	printf("high weight : %f and positioon : %d\n",small,small_index);
}

*/

/*

5) Escreva um programa em C que crie um vetor de 10 posições de inteiros. Em cada
posição deve ser armazenado o quadrado do índice referente à posição. Ao final, o
programa deve imprimir o vetor resultante.

main(){
	
	int vector[10],i;
	
	for(i=0;i<10;i++){
		vector[i] = i^2;
		printf("EXPO|%d|\n",&vector[i]);	
	}
}

*/

/*

6) Escreva um programa em C que crie um vetor de 10 posições de floats, leia os valores
a serem armazenados no vetor a partir do teclado. Após a leitura, o programa deve exibir
um menu para que o usuário indique que posição do vetor deve ser impressa. O menu
deve ser encerrado quando o usuário digitar o valor -1.

main(){
	
	float vector[9];
	int i,j,k;
	for(i=0;i<10;i++){
		printf("input a valor : \n");
		scanf("%f",&vector[i]);
	}
	
	
	
	while(!(k==-1)){
		
		
	printf("choose a position to print : \n");
	for(j=0;j<10;j++){
		printf("position [%d]\n",j);
	}
	scanf("%d",&k);
		switch(k){
		case 0:
			printf("%f\n",vector[0]);
			system("pause");
			system("cls");
			break;
		case 1:
			printf("%f\n",vector[1]);
			system("pause");
			system("cls");
			break;
		case 2:
			printf("%f\n",vector[2]);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("%f\n",vector[3]);
			system("pause");
			system("cls");
			break;
		case 4:
			printf("%f\n",vector[4]);
			system("pause");
			system("cls");
			break;
		case 5:
			printf("%f\n",vector[5]);
			system("pause");
			system("cls");
			break;
		case 6:
			printf("%f\n",vector[6]);
			system("pause");
			system("cls");
			break;
		case 7:
			printf("%f\n",vector[7]);
			system("pause");
			system("cls");
			break;
		case 8:
			printf("%f\n",vector[8]);
			system("pause");
			system("cls");
			break;
		case 9:
			printf("%f\n",vector[9]);
			system("pause");
			system("cls");
			break;
		case -1:
			printf("saindo...");
			system("pause");
			break;
		default:
			printf("comando invalido, tente novamente.");
			break;
		}
		
	}
	
	}

*/




/*
7) Escreva um programa em C que crie um vetor de 10 posições de inteiros, leia os valores
a serem armazenados no vetor a partir do teclado. Após a leitura, o programa deve ordenar
o vetor de forma crescente, ou seja, do menor para o maior valor. Ao final, o programa
deve imprimir o vetor ordenado.
Ex:
Vetor lido: 12,14,7,5,29
Vetor ordenado de forma crescente: 5,7,12,14,29

main(){
	
	int vector[10],a,b,c;
	
	for(i=0;i<10;i++){
		printf("input a number : ");
		scanf("%d",&vector[i]);
		
	}
	
	//nao consegui vou esperar a explicação do professor
}


*/


