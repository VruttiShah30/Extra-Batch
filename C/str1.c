#include<stdio.h>
main(){
	char str[10]={'m','e','g','h','a'},str2[10];
	printf("\n str=%s",str);
	
	printf("\n Enter str2");
	
	//space also consider as character
	//scanf("%s",str2);
	//printf("\n str2 = %s",str2);
	
	//space consider as space 
	gets(str2);//get from user
	puts(str2);//print string
	
}
