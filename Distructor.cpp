
#include <iostream>
using namespace std;
static int Count = 0;    
class Test {
public:
   
    Test()
    {
 
        Count++;
        cout << "No. of Object created: " << Count
            << endl;
                Count++;
    }
 
   
    ~Test()
    {
         
        cout << "No. of Object destroyed: " << Count       
            << endl;                                    
        Count--;
        
    }
};
 

int main()
{
    Test t, t1, t2, t3;
 
    return 0;
}
