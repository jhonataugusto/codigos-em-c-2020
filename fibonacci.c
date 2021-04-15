#include <stdio.h>

/*4) Faça um programa que imprima os N primeiros termos da série de Fibonacci. A série
de Fibonacci é a seguinte:
1,1,2,3,5,8,13...
*/

main(){
		int i=0,n,f1=1,f2,f3;
		printf("digite o numero limite para a serie fibonacci: ");
		scanf("%d",&n);
		
		for(i=0;i<=n;i++){
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			printf("\n%d",f3);
		}
}
