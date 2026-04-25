#include<stdio.h>

float pi = 3.14; //global variable

void test(){
	printf("\n Global variable in function pi=%f",pi);
}

void add(int a,int b){//a and b formal parameter
	int c = a + b;
	printf("\n Addition =%d",c);
}

main(){
	int x = 10;//Local variable
	{
		int y = 90; // Local variable
		printf("\n y = %d",y);
	}
	
	
	printf("\n Global variable pi = %f",pi);
	test();
	add(10,20);
}
