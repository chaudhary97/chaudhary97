#include <iostream>
using namespace std;

int m = 10;
main()
{
    int m = 20;
    {
        int k = m;
        cout << "We are in inner block" << endl;
        cout << "k= " << k << endl;
        cout << "m= " << ::m << endl;
    }
    cout << "We are in outter block" << endl;
    cout << "m= " << m << endl;
    cout << ":: m=:: " << ::m << endl;
}