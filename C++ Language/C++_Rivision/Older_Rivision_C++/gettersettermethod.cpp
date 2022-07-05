// Getter Setter Method
#include <iostream>
using namespace std;
class GetterSetter
{
private:
    string email, password;

public:
    void setEmail(string email)
    {
        this->email = email;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
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
    GetterSetter ep;
    ep.setEmail(email);
    ep.setPassword(password);
    cout << "Email = " << ep.getEmail() << endl;
    cout << "Password = " << ep.getPassword() << endl;
}