#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void get()
		{
			cout<<"enter the name and age of person"<<endl;
			cin>>name>>age;
		}
};
class employee:public virtual person
{
	public:
		int salary;
		int id;
		void get()
		{
			cout<<"enter the salary and id"<<endl;
			cin>>salary>>id;
		}
};
class customer:public virtual person
{
	public:
		int custno;
		void get()
		{
			cout<<"enter the customer no"<<endl;
			cin>>custno;
		}
};
class empcus:public employee,public customer
{
	public:
		void disp()
		{
			cout<<"following is empcus "<<endl;
		}
		
};

int main()
{
	empcus e2;
	e2.disp();
	return 0;
}
