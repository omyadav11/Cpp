#include<iostream>
using namespace std;
class Person{
	public:
	int age;
	long int mob;
	string name;
	string add;
	
	void input(){
		cout<<"enter your information"<<endl<<"1.name"<<endl<<"2.age"<<endl<<"3.mob"<<endl<<"4.add"<<endl;
		cin>>name>>age>>mob>>add;
		
	}
	void display(){
		cout<<name<<endl<<age<<endl<<mob<<endl<<add<<endl;	
	}

};

class Student:public Person{
	public:
	int prn;
	int marks;
	string div;
	void get(){
		input();
		cout<<"enter prn,marks and div"<<endl;
		cin>>prn>>marks>>div;
	}
	void print(){
		display();
		cout<<prn<<endl<<marks<<endl<<div<<endl;
	}
};

int main(){
	Student s1;
	s1.get();
	s1.print();


}

