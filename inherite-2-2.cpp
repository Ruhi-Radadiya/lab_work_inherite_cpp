#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void getA(){
		
			cout<<"Enter A:";
			cin>>a;
		}
};

class B : public A
{
	public:
		int b;
		void getB(){
				
			cout<<"Enter B:";
			cin>>b;
		}
};

class C : public A
{
	public:
		int c;
		void getC(){
			
			cout<<"Enter C:";
			cin>>c;
		}
};

class D : public B,public C
{
	public:
		int d;
		void getD(){
			
			cout<<"Enter D:";
			cin>>d;
			cout<<"The sum of all digits is:"<<B::a+b+c+d;
		}	
};
int main(){
	D d1;
	
	d1.B::getA();
	d1.getB();
	d1.getC();
	d1.getD();
	
	return 0;
}