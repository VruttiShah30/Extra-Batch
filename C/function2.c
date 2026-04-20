#include<stdio.h>
int square(int num){
	int s;
	s = num*num;
	return s;
}
float areaofCircle(){
	int r;
	float area;
	printf("\n Enter Radius : - ");
	scanf("%d",&r);
	area = 3.14 * r * r;
	return area;
}
main(){
	int ans = square(12);
	printf("\n Square = %d",ans);
	float a = areaofCircle();
	printf("\n Area = %f",a);
}
