#include <iostream>
#include <string>

using namespace std;

struct address1
{
    string name;
    char favcar;
    int id;
    float salary;

    void show()
    {
        address1 Ankit;
        cout <<name << endl;
        cout << id << endl;
        cout << salary << endl;
    }
};
int main()
{
    struct address1 Ankit;
    Ankit.name = "Ankit";
    Ankit.id = 890;
    Ankit.salary = 19000.99;
    Ankit.show();
}
