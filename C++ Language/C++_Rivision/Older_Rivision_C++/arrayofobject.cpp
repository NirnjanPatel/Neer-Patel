// Concept of array in onbject and class
#include <iostream>
#include <stdio.h>
using namespace std;
class library
{
private:
    char name[567];
    double price;

public:
    void geDetails()
    {
        get char();
        cout << "Enter book Name = ";
        cin.getline(name, 744);
        cout << "Enter Price = ";
        cin >> price;
    }
    void showDetails()
    {
        cout << Name << "\t" << price << endl;
    }
};
int main()
{
    int num;
    cout << "Enter number of books : ";
    cin >> num;
    library books[43];
}