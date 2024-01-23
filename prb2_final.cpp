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
class child:public parents,public environment{
	public:
		void show()
		{
			cout<<"all attributes"<<endl;
		}
};
int main()
{
	child c1;
	c1.parents::showAttrib();
	c1.environment::showAttrib();
	c1.show();
	return 0;
}

