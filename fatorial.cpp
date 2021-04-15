#include <stdio.h>

int main(){
	
	int f,n;
	
	printf("calculador de fatorial\n");
	printf("digite um numero: ");
	scanf("%d",&n);
		
	for(f=1;n>1;n--){
		
		f=f*n;
		
		
	}
	printf("%d",f);
}
