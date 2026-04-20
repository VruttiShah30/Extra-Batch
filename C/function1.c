#include<stdio.h>
/*
	returntype functionname(p1,p2,....){
	//block
*/
//if nothing in return value then use void returntype
//function declaration
void printMsg();
void add(int x, int y);
main(){
	printMsg(); //function calling
	add(20,40);
	add(200,400);
	
}
//Function defination
void printMsg(){
	printf("\n Hello World");
}
void add(int x, int y){
	printf("\n Addition of %d and %d = %d",x,y,x+y);
}

