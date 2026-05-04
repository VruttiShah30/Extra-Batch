#include<stdio.h>
struct User{
	char name[20];
	int Uid;
	char email[30];
	int std;
};
main(){
	struct User u1={"Vrutti",101,"vrutti@gmail.com",11};
	printf("\n name=%s",u1.name);
	printf("\n userid=%d",u1.Uid);
	printf("\n email=%s",u1.email);
	printf("\n std=%d",u1.std);
}
