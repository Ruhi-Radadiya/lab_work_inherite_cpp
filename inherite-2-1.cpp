//Interest = Principal × Rate × Tenure
#include<iostream>
using namespace std;

class RBI{
	public:
		void getRBI(){
		int principal;
	    static float rate=3.50;
		int tenure;
			cout<<"Enter Principal:";
			cin>>principal;
			cout<<"Enter tenure:";
			cin>>tenure;
			cout<<"Your interest rate is 3.50%"<<endl;
			cout<<"Rate of interest is :"<<principal*rate*tenure<<endl;	
		}
};

class SBI:public RBI
{
	public:
		void getSBI(){
			cout<<"___________________________"<<endl;
			cout<<"WELCOM TO SBI BANK"<<endl;
			
		}	
};

class BOB : public RBI
{
	public:
		void getBOB(){
			cout<<"___________________________"<<endl;	
			cout<<"WELCOM TO BOB BANK"<<endl;
			
		}	
};

class ICICI : public RBI
{
	public:
		void getICICI(){
			cout<<"___________________________"<<endl;
			cout<<"WELCOM TO ICICI BANK"<<endl;
			
		}	
};
int main(){
	SBI s1;
	BOB b1;
	ICICI i1;
	
	s1.getSBI();
	s1.getRBI();
	b1.getBOB();
	b1.getRBI();
	i1.getICICI();
	i1.getRBI();
	return 0;
}