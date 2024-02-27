#include<iostream>
#include<iomanip>
using namespace std;

class Movie{
	string name;
	int atp=100;
	int ctp=70;
	int na;
	int nc;
	int ga;
	
public:
	void getData()
	{
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter adult member : ";
		cin>>na;
		cout<<"enter child member : ";
		cin>>nc;
	}
	
	
	int ticket(){
		cout<<endl;
		cout<<"Movie name:"<<name<<endl;
		cout<<"adult member:"<<na<<"price:"<<atp<<"total amount:"<<na*atp<<endl;
		cout<<"child member:"<<nc<<"price:"<<ctp<<"total amount:"<<nc*ctp<<endl;
		ga=na*atp+nc*ctp;
		cout<<"gross amount:"<<ga<<endl;
		cout<<"charity:"<<ga*0.1<<endl;
		 
	}
	
};

int main(){
	
	Movie m;
	m.getData();
	m.ticket();
}
	


	

