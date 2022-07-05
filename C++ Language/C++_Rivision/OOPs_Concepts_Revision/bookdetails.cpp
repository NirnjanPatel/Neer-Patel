//array of object
// Book Details program
#include<iostream>
#include<stdio.h>
using namespace std;
class Library
{
private:
    char name[500], author[100];
public:
void GetBookDetails()
{
    cout << "Enter Book Name :";
    cin.getline(name, 344);
    cout << "Enter Author Name :";
    cin.getline(author, 344);
}
void printBookDetails()
{
    cout << "Book Name : " << name << endl;
    cout << "Author Name : " << author << endl;
}
};

int main()
{
    Library book[50];
    int i, num;
    cout << "Enter No. of Books : ";
    cin >> num;
    getchar();
    for (i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " Book Detail : " << endl;
        book[i].GetBookDetails();
    }
    for (i = 0; i < num;i++)
    {
        cout << i + 1 << " Book Details : " << endl;
        book[i].printBookDetails();
    }
        return 0;
} 
    
 