//find simple interest 
#include<stdio.h>
main(){
	int p,n,r,si;
	printf("Enter value of p,n,r :-");
	scanf("%d %d %d",&p,&n,&r);
	si=(p*n*r)/100;
	printf("\n Simple Interest is : - %d",si);
}

