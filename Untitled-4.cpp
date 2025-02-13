#include <iostream>
using namespace std;
int main()
{
    int*mathmarks[] = {45, 60, 70, 78};

    
     cout << "These are the marks" <<*mathmarks<<endl;
     cout << "These are the marks"<<*(mathmarks+1)<<endl;
      cout << "These are the marks"<<*(mathmarks+2)<<endl;
       cout << "These are the marks"<<*(mathmarks+3)<<endl;
return 0;
}