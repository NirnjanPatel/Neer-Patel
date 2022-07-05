// Getter Setter Method Paractise
#include <iostream>
using namespace std;
class getEmailPassword
{
private:
    string email, password;

public:
    // Setter Method
    void setEmail(string calledemail)
    {
        email = calledemail;
    }
    void setPassword(string calledepassword)
    {
        password = calledepassword;
    }
    // Getter Method
    string getEmail()
    {
        return email;
    }
    string getPassword()
    {
        return password;
    }
};
int main()
{
    string email, password;
    cout << "Enter Email : ";
    getline(cin, email);
    cout << "Enter Password : ";
    getline(cin, password);
    getEmailPassword obj;
    obj.setEmail(email);
    obj.setPassword(password);
    cout << "Returned Email = " << email << endl;
    cout << "Returned Password = " << password << endl;
}