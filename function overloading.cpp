#include<iostream>
using namespace std;

add(int a,int b)
{
	return  a+b;
}
add(int a,int b,int c)
{
	return a+b+c;
}
add(float a,float b)
{
	return a+b;
}

int main()
{
	int x,y;
	int a,b,c;
	float o,m; 
	cout<<"enter two integers"<<endl;
	cin>> x>> y;
	cout<<"addition"<<add(x,y)<<endl;
	cout<<"enter three integers"<<endl;
	cin>>a>>b>>c;
	cout<<"addition"<<add(a,b,c)<<endl;
	cout<<"enter two float value"<<endl;
	cin>>o>>m;
	cout<<"addition"<<add(o,m)<<endl;	
	
}
