// Destructor
// Destructors in C++ are members functions in a class that delete an object.
//  They are called when the class object goes out of scope such as when the function ends,
//   the program ends, a delete variable is called etc.
// Destructors are different from normal member functions as they don’t take any argument
//  and don’t return anything. Also, destructors have the same name as their class and
//   their name is preceded by a tilde(~).
#include<iostream>
using namespace std;
class Demo {
   private:
   int num1, num2;
   public:
   Demo(int n1, int n2) {
      cout<<"Inside Constructor"<<endl;
      num1 = n1;
      num2 = n2;
   }
   void display() {
      cout<<"num1 = "<< num1 <<endl;
      cout<<"num2 = "<< num2 <<endl;
   }
   ~Demo()
   {
       cout << "Inside Destructor" <<endl;
   }
};
int main() {
   Demo obj1(10, 20);
   obj1.display();
   return 0;
}