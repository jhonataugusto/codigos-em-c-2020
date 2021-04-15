#include <stdio.h>


main(){

int salario,gratificacao,imposto, novo;

printf("digite o salario do empregado:\n");
scanf("%d",&salario);

gratificacao = salario*5/100;
printf("gratificacao = %d\n", gratificacao);
imposto = salario*7/100;
printf("imposto = %d\n", imposto);

novo = salario + gratificacao - imposto;

printf("o novo salario do empregado e de : %d\n", novo);
}
