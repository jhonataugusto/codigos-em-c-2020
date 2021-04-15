#include <stdio.h>

main(){
	int nota1,nota2,nota3,media,r;
	printf("digite a primeira nota\n");
	scanf("%d",&nota1);
	printf("digite a segunda nota\n");
	scanf("%d",&nota2);
	
	media = ((nota1 + nota2)/2);
	printf("sua media e: %d\n",media);
	
	if(media>=7){
		printf("voce passou, deseja fazer a AV3 para o aumento de nota? SIM = 1 / NAO = 2\n");
		scanf("%d",&r);
		switch(r){
			case 1:
				// o cara vai fazer de novo pois ele quer aumentar a nota dele
				system("cls");
				printf("digite a nota da sua AV3\n");
				scanf("%d",&nota3);
				// aqui vai verificar qual a nota menor e substituir
				media = 0;
				if(nota3>nota2){
					media = 0;
					media = ((nota1+nota3)/2);
				} else if(nota3>nota1){
					media = 0;
					media = ((nota3+nota2)/2);
				} // aqui ele vai dizer se passou ou se nao alterou nada
				if(media>6){printf("parabens, sua nota foi aumentada com sucesso.\n");} 
					else if(media<=6){printf("voce tirou menos do que sua nota atual, nenhuma nota sera alterada.\n");}
				break;
				
			case 2:
				system("cls");
				printf("encerrando ano letivo... parabens! voce passou com : %d\n",media);
				break;
				
			default:
				system("cls");
				printf("opcao invalida, tente novamente.");
				break;
		}
		
	}else if(media<7){
		printf("voce nao passou, faca a AV3 para poder recuperar a nota.\n");
		printf("digite a nota da sua AV3");
		scanf("%d",&nota3); 
		
		//substituidor de nota
		if(nota3>nota2){media = ((nota1+nota3)/2);} 
			else if (nota3>nota1){media = ((nota2+nota3)/2);}
		//verificador de aprovação
		if(media>6){printf("voce passou com: %d",media);}
			else if(media<=6){printf("voce reprovou com: %d",media);}	
	}
}	
