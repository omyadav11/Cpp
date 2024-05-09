#include <iostream>
using namespace std;
class student {
    int rno;
    char name[50];
    double fee;
 
public:
  
    student()
    {
        cout << "Enter the RollNo:"<<endl;
        cin >> rno ;
        cout << "Enter the Name:"<<endl;
        cin >> name;
        cout << "Enter the Fee:"<<endl;
        cin >> fee;
    }
 
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};
 
int main()
{
    student s; 
               
    s.display();
    return 0;
}
