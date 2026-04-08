#include<stdio.h>
//find whether number is even or odd
main(){
	int num;
	printf("\n Enter the value of num : -");
	scanf("%d",&num);
	if(num %2 == 0){
		printf("\n num is even");
	}
	else{
		printf("\n num is odd");
	}
}
