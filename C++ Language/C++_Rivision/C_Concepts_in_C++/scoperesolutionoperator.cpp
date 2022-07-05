// Scope resolution (::) operator
#include <iostream>
using namespace std;
int inum=25;

void display()
{
    int inum=7;
cout<<"number ="<<inum<<endl;
cout<<"number ="<<::inum<<endl;
}
int main()
{
int inum=12;
display();
cout<<"number ="<<inum<<endl;
cout<<"number ="<<::inum<<endl;
}