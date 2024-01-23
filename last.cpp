#include<iostream>
using namespace std;

class mammal
{
	public:
		mammal()
		{
			cout<<"mammals give direct birth"<<endl;
		}
		~mammal()
		{
			cout<<"destructor of mammal"<<endl;
		}
};

class bird
{
	public:
		bird()
		{
			cout<<"they can fly"<<endl;
		}
		~bird()
		{
			cout<<"destructor of bird"<<endl;
		}
};

class bat : public mammal,public bird{

};

int main()
{
	bat b1;
	return 0;
}
