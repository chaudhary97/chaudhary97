#include <iostream>
using namespace std;
int main()
{
    int mathmarks[] = {45, 60, 70, 78};
    mathmarks[0] = 64;
    mathmarks[1] = 74;
    mathmarks[2] = 84;
    mathmarks[3] = 94;
    cout << "These are the marks" << endl;

    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl<<endl;
    
    mathmarks[2]=89;
    cout<<mathmarks[0]<<endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    return 0;
}