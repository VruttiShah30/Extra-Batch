#include<stdio.h>
main(){
	int i,num;
	for(i=1;i<=10;i++){
		if(i==5 || i==7){
			continue;
		}
		printf("\n i=%d",i);
	}
	for(;;){//      (;;)-infinity loop
		printf("\n Enter Num :- ");
		scanf("%d",&num);
		if(num==0){
			break;
		}
	}
}
