#include<iostream>
using namespace std;
class base{
	public:
			int num,mum;

		base()
		{
			cout<<"base class:default constructor"<<endl;
		}
		base(int x)
		{
			num = x;
			cout<<"base class:parameterized constructor"<<endl;
			cout<<num<<endl;
		}
		
//		base(int x, int y)
//		{
//			num=x;
//			mum=y;
//			cout<<"derived class:parameterized constructor"<<endl;
//			cout<<num<<mum<<endl;			
//		}
		~base()
		{
			cout<<"base class:default destructor"<<endl;
		}
		
};

class derived :public base{
	
	public:
			int a,b;

		derived()
		{
			cout<<"derived class:default constructor"<<endl;
		}
		
		derived(int x , int y):base(6)
		{
			a=x;
			b=y;
			cout<<"derived class:parameterized constructor"<<endl;
			cout<<a<<endl<<b<<endl;			
		}
		
		~derived()
		{
			cout<<"derived class:default destructor"<<endl;
		}
};

int main()
{
	derived ob(5,6);
		
}
