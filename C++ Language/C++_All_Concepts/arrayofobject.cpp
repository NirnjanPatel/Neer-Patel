#include <stdio.h>
#include <iostream>
using namespace std;
class Library
{
private:
    char name[453], author[234];

public:
    void getData()
    {
        cout << "Enter Book Name : ";
        cin.getline(name, 345);
        cout << "Enter Author Name : ";
        cin.getline(author, 345);
    }
    void printData()
    {
        cout << "Book Name = " << name << "\n"
             << "Author Name =  " << author << endl;
    }
};
int main()
{
    int num, i;
    cout << "Enter no. of books : ";
    cin >> num;
    Library book[435];
    getchar();
    for (i = 0; i < num; i++)
    {
        cout << "Enter" << i + 1 << "Book Details : " << endl;
        book[i].getData();
    }
    cout << "Book Details : \n";
    for (i = 0; i < num; i++)
    {
        book[i].printData();
    }
    return 0;
}