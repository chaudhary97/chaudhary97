#include <iostream>
using namespace std;
int main()
{
    int mathmarks[] = {45, 60, 70, 78};

    mathmarks[0] = 64;
    mathmarks[1] = 74;
    mathmarks[2] = 84;
    mathmarks[3] = 94;
    for(int i=0; i<4; i++)
    {
    cout << "These are the marks" <<i<<endl<<mathmarks[i]<<endl;
    }
    
return 0;
}