#include <stdio.h>
#include <math.h>

int main(){
	for(int j=1; j<=9;j++){
		for (int i=1; i<=9;i++){
			printf("%d*%d=%02d ",i,j,i*j);
		}
		printf("\n");
	}
	printf("end");
	return 0;
}
