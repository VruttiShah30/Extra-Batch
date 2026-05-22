#include<iostream>
using namespace std;
class Country {
	public:
		int cid;
		char countryName[20];
		void getCountry(){
			cout<<"\n Enter Country Id and name : - ";
			cin>>cid>>countryName;
		}
};
class State : public Country {
	public:
		int Stateid;
		char StateName[20];
		void getState() {
			cout<<"\n Enter StateId and Name : - ";
			cin>>Stateid>>StateName;
		}
};
class City : public State {
	public:
		int CityId;
		char Address[50];
		char CityName[20];
			void getCity(){
				cout<<"\n ENter City Id and Name : - ";
				cin>>CityId>>CityName;
			}
			void getAddress(){
				cout<<"\n Enter Address : - ";
				cin.getline(Address,50);
			}
			void printAddress() {
				cout<<"\n Address = "<<Address;
				cout<<"\n City = "<<CityName;
				cout<<"\n State = "<<StateName;
				cout<<"\n Country = "<<countryName;
				
			}	
};

main(){
	City c1;
	c1.getAddress();
	c1.getCity();
	c1.getState();
	c1.getCountry();
	c1.printAddress();
}
