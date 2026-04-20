/*
	 4 * 1 = 4
	 4 * 2 = 8
	 4 * 3 = 12
	 4 * 4 = 16
	 4 * 5 = 20
	 4 * 6 = 24
	 4 * 7 = 28
	 4 * 8 = 32
	 4 * 9 = 36
	 4 * 10 = 40
*/
#include<stdio.h>
main(){
	int num, i ;
	printf("\n Enter num");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("\n %d * %d = %d",num,i,i*num);
	}
}
