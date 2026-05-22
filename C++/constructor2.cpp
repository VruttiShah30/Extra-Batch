#include<iostream>
using namespace std;
class AreaOfCircle{
	public:
		int r; // Data Member
		//Default constructor
		AreaOfCircle(){
			cout<<"\n Enter Radius : - ";
			cin>>r;
		}
		AreaOfCircle(int radius){
			r=radius;
		} 
		void FindArea(){
			float a=3.14*r*r;
			cout<<"\n Area of Circle is : - "<<a;
		}
};

main(){
	AreaOfCircle a1;
	a1.FindArea();
	AreaOfCircle a2(20);
	a2.FindArea();
}
