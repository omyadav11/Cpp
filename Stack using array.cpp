#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int max = 100;
        int sa[100];
    public:
        Stack(){
            this->top = -1;
        }
        void push(int ele){
            if(top >= max-1){
                cout<<"Overflow"<<endl;
            }
            else{
                sa[++top] = ele;
            }
        }
        void pop(){
            if(top <= -1){
                cout<<"UnderFlow"<<endl;
            }
            else{
                top--;
            }
        }
        void display(){
            if(top >= 0){
                cout<<"Stack elements are:"<<endl;
                for(int i = top; i >= 0; i--){
                    cout<<sa[i]<<endl;
                }
            }
            else{
                cout<<"stack is empty"<<endl;
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
    s.display();
    s.pop();
    s.display();
    return 0;
}

