// Concept of string
#include <iostream>
#include <string.h>
using namespace std;
char *getUpperCase(char str[])
{
    int len = strlen(str); // P.D. Function to get lenght of string
    cout << "Length of string = " << len << endl;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else
            str[i] = '*';
    }
    return str;
}
int main()
{
    char str[50], *ptr;
    cout << "Enter string : ";
    // cin >> str;  can be use but it will only take first name till space
    cin.getline(str, 50);

    ptr = getUpperCase(str);
    cout << "String : " << ptr << endl;
}