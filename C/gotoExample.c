#include<stdio.h>
main(){
	int num;
	printf("Enter num :- ");
	scanf("%d",&num);
	
	
	if(num%2==0){
		goto Even;
	}
	else{
		goto Odd;
	}
		
	Even : {
		printf("Num is Even");
		return;
	}
	Odd : {
		printf("Num is Odd");
		return;
	}	
}
