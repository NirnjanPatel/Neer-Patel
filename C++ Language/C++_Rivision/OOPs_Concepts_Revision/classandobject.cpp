// Class and object
#include<iostream>
using namespace std;
    class Name
    {
        public:
        void DisplayName(char name[])
        {
            cout << "Name : " << name << endl;
        }
    };
    int main()
    {
        char name[12];
        cout << "Enter Your Name : ";

        cin.getline(name, 34);
        Name obj;
        obj.DisplayName(name);
        return 0;
}