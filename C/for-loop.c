#include<stdio.h>
/*for(init;condi;mod){
}
*/
//to print 1 to 10
main(){
	int i, enroll,j;
	for(i=1;i<=10;i++){
		printf("\n i = %d",i)
	}
	
	for(j=30;i>=20;j--){
		printf("\n j = %d",j)
	}
	
	for(i=1;i<=10;i++){
		printf("\n Enter enroll number of student no =%d :=>",i);
		scanf("%d",&enroll);
		printf("n Enroll number of student %d is : - ",i,enroll);
	}
}
