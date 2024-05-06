#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int age;
};

class customer:public virtual person{
	public:
		string add;
		long phn;
	
};

class employee:public virtual person{
	public:
		string id;
}; 

class employeecustomer:public employee,public customer{
	public:
		void input(){
			cout<<"enter your name"<<endl;;
			cin>>name;
			cout<<"enter your age"<<endl;;
			cin>>age;
			cout<<"enter your phone no."<<endl;;
			cin>>phn;
			cout<<"enter your address"<<endl;;
			cin>>add;
			cout<<"enter your id"<<endl;
			cin>>id;
			
		}
		
		void output(){
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<phn<<endl;
			cout<<add<<endl;
			cout<<id<<endl;
		}
};

int main(){
	employeecustomer p1;
	p1.input();
	p1.output();
}
