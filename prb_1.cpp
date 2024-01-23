#include<iostream>
using namespace std;
class base
{
	protected:
		int num;
	
	public:
		void setNum(int x)
		{
			num =x;
		}
		void showNum()
		{
			cout<<num<<" in base class"<<endl;
		}
		
};

class derived: public base
{
	public:
		void showNum()
		{
//			cout<<num<<" in derived class"<<endl;
			base::showNum();
		}
};

int main()
{
	derived d1;
	base b1;
	d1.setNum(10);
	d1.showNum();
	return 0;
};

