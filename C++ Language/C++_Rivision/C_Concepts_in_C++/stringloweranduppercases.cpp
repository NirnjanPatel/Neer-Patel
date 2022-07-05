// get String length and upper to lower and lower to upper class 
#include<iostream>
#include<string.h>
using namespace std;
char* changecases(char name[])
{
    int length = strlen(name);
    cout << "String length is = " << length << endl;

    for (int i = 0; i < length;i++)
    {
        if(name[i]>=67 && name[i]<=90)
            name[i] = name[i] - 32;
        else if (name[i] >= 'a' && name[i]<=122)
            name[i] = name[i] + 32;
        else
            cout <<"*";
    }
    return name;
}

int main()
{
    char name[34];
    cout<<"Enter Name : ";
    cin.getline(name, 43);
    char *ptr = changecases(name);
    return 0;
}