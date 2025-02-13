#include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;

public:
    point(int i = 0, int j = 0) : x(i), y(j) {}

    int getX() const { return x; }
    int getY() const { return y; }
};
int main()
{
    point t1(20, 23);
    cout << "x =" << t1.getX();
    cout << "y =" << t1.getY();
    return 0;
}
