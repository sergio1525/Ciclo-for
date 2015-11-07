#include<stdio.h>
#include<stdlib.h>
int n;
int i;
int suma;
int main() {
	
	printf("INGRESE UN NUMERO\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n El EL NUMERO ES %d\n",i);
		suma=suma+i;
	}
	printf("\n la suma: %d\n",suma);
	system("PAUSE");
	return 0;
}
