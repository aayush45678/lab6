#include<iostream>
#include<cstring>
using namespace std;

class staff{
	protected:
	char *name;
	int staff_no;
	
	public:
		void setinfo(char *n,int id)
		{
			int length = strlen(n);
			name = new char(length + 1);
			strcpy(name,n);
			staff_no = id;
		}
		
		void showinfo()
		{
			cout<<"name = "<<name<<endl<<"Staff id= "<<staff_no<<endl;
		}
};

class lecturer:public staff{
	private:
	int workload;
	
	public:
		void setload(int x)
		{
//			
			workload = x;
				
		}
		void showinfo()
		{
			cout<<workload<<endl;	
			cout<<"Above details are for lecturer"<<endl;
		}
};

class librarian:public staff{
	private:
	int bookdemands;
	
	public:
		void setdemand(int x)
		{
			bookdemands = x;
		}
		void showinfo()
		{
			cout<<"bookdemands = "<<bookdemands<<endl;
			cout<<"Above details are for librarian"<<endl;

		}
};

int main()
{
	lecturer l1;
	l1.staff::setinfo("eminem",5);
	l1.staff::showinfo();
	l1.setload(43);
	l1.showinfo();
	
	librarian c1;
	c1.staff::setinfo("miley",10);
	c1.setdemand(48);
	c1.staff::showinfo();
	c1.showinfo();
	return 0;	
}
