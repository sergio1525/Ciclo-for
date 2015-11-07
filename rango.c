#include <stdio.h>
#include<stdlib.h>
int n1;
int n2;
int main()
{
	printf("INGRESE EL PRIMER NUMERO\n");
	scanf("%d",&n1);
	printf("INGRESE EL SEGUNDO NUMERO\n");
	scanf("%d",&n2);
	if(n1<n2){
		for(;n1<=n2;n1++){
			printf("%d\n",n1);
		}
	}else{
		for(;n1>=n2;n1--){	
			printf("%d\n",n1);
		}		
	}
	system("PAUSE");
	return 0;
}
