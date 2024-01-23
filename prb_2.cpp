#include<iostream>
using namespace std;

class parents
{
	public:
		void showAttrib(){
			cout<<"attributes from parents"<<endl;
		}
		
};

class environment{
	public:
		void showAttrib(){
			cout<<"attributes from environment"<<endl;
		}
};
class child{
	public:
		void show()
		{
			cout<<"all attributes"<<endl;
		}

