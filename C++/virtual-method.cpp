#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display(){
			cout<<"\n Parent Class Method Called ";
		}
};

class Child:public Parent{
	public:
		void display(){
			cout<<"\n Child Class Method Called";
		}
};
main(){
	Child c1;
	c1.display();
}
