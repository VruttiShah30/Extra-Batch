#include<stdio.h>
//find square of only possitive value
main(){
	int num;
	printf("\n Enter the value of num");
	scanf("%d",&num);
	if(num > 0){
		printf("\n Square of %d =%d",num,num*num);
	}
}
