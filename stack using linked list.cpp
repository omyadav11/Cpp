#include<iostream>
using namespace std;
class Node{
	public:
		
	int data;
	Node* next;
	
	Node(int n){
		this->data=n;
		this->next=NULL;
	}
};

class Stack{
	Node* top;
	
	public:
		Stack(){
			top=NULL;
		}
		
	void push(int data){
		Node* temp=new Node(data);
		if(!temp){
			cout<<"Overflow"<<endl;
			
		}
		temp->data=data;
		temp->next=top;
		top=temp;
		
	}
	void pop(){
		Node* temp;
		if(top==NULL){
			cout<<"Underflow"<<endl;
			
		}
		else {
			temp=top;
			top=top->next;
			delete temp;
		}
	}
	void display(){
	    cout<<endl;
	    cout<<"stack elements are"<<endl;
		Node* temp;
		if(top==NULL){
			cout<<"UnderFlow "<<endl;
			
		}
		else{
			temp=top;
			while(temp!=NULL){
				cout<<temp->data;
				temp=temp->next;
				if(temp!=NULL){
					cout<<"->";
				}
			}
		}
	}	
};

int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.display();

	return 0;
}

