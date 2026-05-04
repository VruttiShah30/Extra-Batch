#include<stdio.h>
main(){
	char str[10];
	int i = 0,counter = 0;
	printf("\n Enter String : - ");
	scanf("%s",str);
	
	while(str[i] !='\0'){
		counter++;
		i++;
	}
	printf("\n lenght of string = %d",counter);
}
