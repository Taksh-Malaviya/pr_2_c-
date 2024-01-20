/*
2. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Price , Discount.
id=23
pass=asdf@123
product number=5
item=soap
quntity=4
price=34
discount=2%

YOUR BILL IS READY 
*/

	
#include<iostream>
using namespace std;

class Supermarket{
	private :
	int id;
	int pass;
	int num;
	int item;
	int quntity;
	int price;
	int discount;
	
	public :
		
		supermarket(){
			
		cout<<"\tEnter ID number:";
		cin>>this->id;
		
		cout<<"\tEnter PASS :";
		cin>>this->pass;
		
		cout<<"ID & PASSWORD IS VERIFYED"<<endl;
		
		cout<<"\tEnter PRODUCT NUMBER:";
		cin>>this->num;
		
		cout<<"\tEnter item number:";
		cin>>this->item;
		
		cout<<"\tEnter quntity number:";
		cin>>this->quntity;
		
		cout<<"\tEnter price number:";
		cin>>this->price;
		
		cout<<"\tEnter discount number:";
		cin>>this->discount;
			
		}
		Supermarket(){
			cout<<"\tYOUR BILL IS READY\n"<<endl;
		}
};



int main(){
	
	Supermarket s;
	
	s.Supermarket;
	s.Supermarket;
	return 0;
	
}
