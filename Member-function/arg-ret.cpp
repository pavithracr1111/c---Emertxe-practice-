/* member function with arguments and return values*/

#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void set()
    {
        cout << a << b;
    }
    int big()
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    Test t1;
    t1.get(10, 20);
    t1.set();
    int max = t1.big();
    cout << max;
}
