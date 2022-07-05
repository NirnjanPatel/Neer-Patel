// Getter Setter Method
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class LoginForm
{
    // private:
    //     char email[23], password[34];
    //     int mobileno;
    // public:
    //     void setEmail(char email[])
    // {
    //     this->email[34] = email[23];
    // }
    // void setPassword(char password[])
    // {
    //     this->password[53] = password[34];
    // }
    //     void setMobileno(int mobileno)
    // {
    //     this->mobileno = mobileno;
    // }
public:
    void getEmail(char email[])
    {
    cout << "Email = " << email << endl;
    }
      void getMobileno(int mobileno)
    {
    cout << "Mobile No. = " << mobileno << endl;
    }
    void getPassword(char password[])
    {
    cout << "Password = " << password << endl;
    }
  
};

int main()
{
    char email[34],password[45];
    int mobileno;
    cout << "Enter your email : ";
    cin.getline( email,34);
    cout<<"Enter your mobile no. : ";
    cin >> mobileno;
    getchar();
    cout<<"Enter your password : ";
    cin.getline(password,34);
    LoginForm obj;

    // obj.setEmail(email);
    // obj.setPassword(password);
    // obj.setMobileno(mobileno);

    obj.getEmail(email);
    obj.getMobileno(mobileno);
    obj.getPassword(password);

    return 0;
}