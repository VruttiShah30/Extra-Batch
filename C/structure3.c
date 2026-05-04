#include<stdio.h>
struct Description{
	char Colour[10];
	char Brand[10];
};
struct Materials{
	char materialname[10];
};
struct Product{
	int pid;
	char pname[10];
	struct Description d1;
	struct Materials m1;
};
main(){
	struct Product p1;
	printf("\n Enter pid and pname : - ");
	scanf("%d %s",&p1.pid,&p1.pname);
	printf("\n Enter colour and brand name and materialname : - ");
	scanf("%s %s %s",p1.d1.Colour,p1.d1.Brand,p1.m1.materialname);
	
	printf("\n product details \n");
	printf("\n pid=%d productname=%s",p1.pid,p1.pname);
	
	printf("\n colour=%s brand=%s",p1.d1.Colour,p1.d1.Brand);
	printf("\n mname=%s",p1.m1.materialname);
	
}
