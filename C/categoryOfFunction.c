#include<stdio.h>

//Without returnYype without Parameter
void printMsg(){
	printf("\n Hello World");
	
}

//Without returnType With Parameter
void add(int a,int b){
	int c = a+b;
	printf("\n addition =%d",c);
}

//With returntype with parameter
int square(int num){
	int s;
	s = num*num;
	return s;
}

//With returntype and without parameter
float areaOfCircle(){
	int r;
	float area;
	printf("\n Enter the value of r : - ");
	scanf("%d",&r);
	area = 3.14*r*r;
	return area;
}

main(){
		printMsg();
		add(12,45);
		int s=square(12);
		printf("\n square = %d",s);
		float a = areaOfCircle();
		printf("\n area of circle =%f",a);
	}
}
