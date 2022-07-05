// change upper and lower case using string
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char* getUpperAndlowerCase(char str[]) // Here * for hold return value --str address 
{
    int len = strlen(str); // strlen to get string lenght
    cout << "Lenght of string = " <<len<< endl;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 97 && str[i] <= 122) // lower case a to 122 z
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
    char str[45];
    cout<<"Enter string : ";
    cin.getline(str, 87);
    char *ptr=getUpperAndlowerCase(str);
    cout << "String : " << ptr << endl;
    return 0;
}