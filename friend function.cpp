#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
		int area;
	public:
		Rectangle(){
			cout<<"Enter length of rectangle"<<endl;
			cin>>length;
			cout<<"Enter breadth of rectangle"<<endl;
			cin>>breadth;
		}	
		
	friend void print(Rectangle& obj);	
};

void print(Rectangle& obj){
	cout<<"area="<<obj.length*obj.breadth;
}

int main(){
	Rectangle R1;
	print(R1);
}
