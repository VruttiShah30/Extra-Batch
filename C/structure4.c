#include<stdio.h>
struct Materials{
	char mname[10];
};
struct Description{
	char Colour[10];
	char Brand[10];
	struct Materials m1;
};
struct Product{
	int pid;
	char pname[10];
	struct Description d1;
};
main(){
	struct Product p1;
	printf("\n Enter Pid and Pname : - ");
	scanf("%d %s",&p1.pid,p1.pname);
	printf("\n Enter Colour and Brand and Materialname : - ");
	scanf("%s %s %s",p1.d1.Colour,p1.d1.Brand,p1.d1.m1.mname);
	
	
	printf("\n product Details \n");
	printf("\n pid=%d productname=%s",p1.pid,p1.pname);
	
	printf("\n colour=%s brand=%s",p1.d1.Colour,p1.d1.Brand);
	printf("\n materialname=%s",p1.d1.m1.mname);
}
