#include <stdio.h>

// passo 1 : criar os vetores
// passo 2 : ler dados do teclado e fazer com que um menu apareça e denomine o indice onde o conteudo
// irá ficar
// passo 3 : sair quando digitar -1
main(){
	float vector[10];
	int i,j,answer;
	for(k=0;)
	for(i=0;i<10;i++){
		
		printf("input a number : ");
		scanf("%f",&vector[i]);
		
		printf("==========================\n");
		printf("     menu of index        \n");
		printf("==========================\n");
		printf("where you want input this scan? \n\n");
	
		for(j=1;j<=10;j++){
			printf("position [%d]\n",j);
		}
		scanf("%f",&answer);
		
		switch(answer){
			case 1:
				vector[0] = answer;
				break;
			case 2:
				vector[1] = answer;
				break;
			case 3:
				vector[2] = answer;
				break;
			case 4:
				vector[3] = answer;
				break;
			case 5:
				vector[4] = answer;
				break;
			case 6:
				vector[5] = answer;
				break;
			case 7:
				vector[6] = answer;
				break;
			case 8:
				vector[7] = answer;
				break;
			case 9:
				vector[8] = answer;
				break;
			case 10:
				vector[9] = answer;
				break;
			case 11:
				
				break;
			default:
				printf("invalid command, try again.\n");
				system("pause");
				system("cls");
				break;
		}
	}
}
