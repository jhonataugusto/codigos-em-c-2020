#include <stdio.h>

/*4) Fa�a um programa que imprima os N primeiros termos da s�rie de Fibonacci. A s�rie
de Fibonacci � a seguinte:
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
