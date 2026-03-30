#include<stdio.h>
//to find area of circle
/*
	input : radius
	const pi = 3.14
	output areaofcircle
*/
main(){
	int r;
	const float pi=3.14;
	float area;
	printf("\n Enter the value of radius : - ");
	scanf("%d",&r);
	area = pi * r * r;
	printf("\n area of circle = %f",area);
}
