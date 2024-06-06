#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    void get();
    void set()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }
    Test big(Test t2);
    void put()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }
};

void Test ::get()
{
    cin >> a >> b;
}
Test Test::big(Test t2)
{
    Test t3;
    t3.a = a + t2.a;
    t3.b = b + t2.b;
    return t3;
}
int main()
{
    Test t1, t2, t3;
    t1.get();
    t2.get();

    t1.set();
    t2.set();

    t3 = t1.big(t2);
    t3.put();
}