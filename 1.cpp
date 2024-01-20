/*1. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.
    ____________________________________________________________________________________


                                        -: RAILWAY RISARVATION PROGRAME :-

        ____________________________________________________________________________________



        Enter train number:44
        Enter your name   :atcv
        tsource            :surat
        tdestinatio        :ambaji
        Train time        :3:40


                Congratulation Your agistration was done successfully.....

*/
#include<iostream>
#include<string.h>
using namespace std;

class Railway{
	private:
		int train_number;
		string name;
		string source;
		string destination;
		int train_time;
	public:
	set(){
		cout<<"\t____________________________________________________________________________________\n"<<endl;
		
		
		cout<<endl<<"\t\t\t\t\t-: RAILWAY RISARVATION PROGRAME :-\n"<<endl;
		cout<<"\t____________________________________________________________________________________\n"<<endl<<endl<<endl;
		
		
		cout<<"\tEnter train number:";
		cin>>this->train_number;
		cout<<"\tEnter your name   :";
		cin>>this->name;
		cout<<"\ttsource            :";
		cin>>this->source;
		cout<<"\ttdestinatio        :";
		cin>>this->destination;
		cout<<"\tTrain time        :";
		cin>>train_time;
	}
	get(){
		cout<<endl<<endl<<"\t\tCongratulation Your agistration was done successfully.....\n"<<endl<<endl;
	}
	
};

int main (){
	Railway r;
	r.set();
	r.get();
	return 0;
}
