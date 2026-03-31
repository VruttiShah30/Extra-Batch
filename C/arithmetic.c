#include<stdio.h>
main(){
	int a=10,b=3,x=10,m,5,c,n;
	
	//modulo operator
	c = a % b;
	printf("\n Reminder = %d",c);
	
	// Post Increment - Decrement 
	x++;//increase by 1 
	printf("\n x = %d",x);
	
	x--;//decrease by 1 
	printf("\n x = %d",x);
	
	
	// Pre Increment - Decrement
	
	n=m++;//post increment - first assign value then increment 
	
	n = ++m;//pre increment - first increment then assign
	printf("\n n=%d m=%d",n,m);

	
}
