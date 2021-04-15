#include <stdio.h>
main(){
	int a,b,valor;
	a=10;
	b=3;
	valor=1;
	
	if(a%b==1){
		valor++;
		a /= valor + b;
		a = a/valor+b;
	}
	
	printf("a=%d",a);	
}
