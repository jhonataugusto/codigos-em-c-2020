#include <stdio.h>

int main(){
	//criar as variaveis
	int n,i,q,multi,soma;
	//criar a interface
	printf("====================somador de numeros multiplos==================\n\n");
	printf("digite um numero: "); scanf("%d",&n);
	printf("digite quantas vezes quer que o multiplo seja somado: "); scanf("%d",&q);
	//pegar os multiplos desse "N" e somar
	while(i<=q){multi = n * i; soma += multi; i++;}
	//printar o resultado final
	printf("%d",soma);

	//professor eu tenho uma duvida, não faço idéia do motivo que está por trás do 1 que aparece em todas as minhas somas
}
