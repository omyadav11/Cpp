#include<iostream>
using namespace std;

class Stack{
    private:
    int top;
    int capacity;
    int *a;
    public:
    Stack(int n){
    	this->capacity=n;
        this->top=-1;
        this->a=new int[n];
        
    }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"Overflow";
            return;
        }    
        this->top++;
        this->a[this->top]=data;
    }
    void pop(){
        if(this->top==-1){
            cout<<"Underflow";
            return;
        }
        this->top--;
    }
    int getTop(){
    	if(this->top==-1){
            cout<<"Underflow";
            return -1;
        }
        return this->a[this->top];
	}
    
    bool isEmpty(){
        if(this->top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(this->top==this->capacity-1){
            return true;
        }
        else{
            return false;
        }
    }
    
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.getTop()<<" ";
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    cout<<s.getTop()<<" ";
    s.pop();
    cout<<s.getTop()<<" ";
}
