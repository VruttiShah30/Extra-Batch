#include<iostream>
using namespace std;
class Product
	//data member
	char pname[20];
	float price;
	char description[30];
	
	public:
		//member function 
		
		void getProductInfo(){
			cout<<"\n Enter the Product Name and Description : ";
			cin>>pname>>price>>description;
		}
		void showProductInfo(){
			cout<<"\n Product Name = "<<pname;
		}
