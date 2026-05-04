#include<stdio.h>
main(){
	char str[10],rev[10];
	int i = 0,counter = 0,j,l=0;
	printf("\n Enter String : - ");
	scanf("%s",str);
	
	while(str[i] !='\0'){
		counter++;
		i++;
	}
	printf("\n lenght of string = %d",counter);
	i--;
	j=i;
	
	while(j >= 0){
		rev[l]=str[j];
		printf("\n str[%d]=%c  rev[%d]=%c",j,str[j],l,rev[l]);
		l++;
		j--;
	}
	printf("\n Reverse String = %s",rev);
	
}
