#include<stdio.h>
struct Fruits{
	int fno;
	char fname[20];
	float price;
};
main(){
	struct Fruits f[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter No , Name and Price of Fruit :-%d",i+1);
		scanf("%d %s %f",&f[i].fno,f[i].fname,&f[i].price);
		
	}
	
	printf("\n Fruit No Fruit Name Fruit Price");
	for(i=0;i<5;i++){
		printf("\n %d %s %f",f[i].fno,f[i].fname,f[i].price);
	}
}
