/* implementAbstraction
Data abstraction is one of the most essential and important feature of object oriented programming
 in C++. Abstraction means displaying only essential information and hiding the details
 . Data abstraction refers to providing only essential information about the data to the
  outside world, hiding the background details or implementation.
*/

#include <iostream>
using namespace std;
  
class implementAbstraction
{
    private:
        int a, b;
  
    public:
      
        // method to set values of 
        // private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
  
int main() 
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}