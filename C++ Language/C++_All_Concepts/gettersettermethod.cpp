// Getter Setter Method
#include <iostream>
using namespace std;
class info
{
private:
    string email, password;

public:
    // Setter Method
    void setEmail(string email)
    {
        this->email = email;
        cout << "Email in seEmail func. = " << email << endl;
    }
    void setPassword(string password)
    {
        this->password = password;
        cout << "Email in sePassword func. = " << password << endl;
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
    // we can declaire object anywhere in this main function
    string email, password;
    cout << "Enter email : ";
    getline(cin, email);
    cout << "Enter password : ";
    getline(cin, password);
    info obj;
    obj.setEmail(email);
    obj.setPassword(password);
    cout << "Getting Email Return from func. = " << email << endl;
    cout << "Getting Password Return from func. = " << password << endl;
}