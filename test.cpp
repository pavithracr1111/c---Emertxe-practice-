#include<iostream>
using namespace std;

class Sample
{
    int a; //private data mem

    public : 
     void geta()
     {
        cout << "Enter a value : " ;
        cin >> a ;
     }

     void seta()
     {
        cout << "a = " << a << endl;
     }

     void big(Sample s2)
     {
        if(a > s2.a)
        {
            cout << "s1 is big" << endl;
        }
        else
        {
            cout << "s2 is big" << endl;
        }
     }
};

int main()
{
    Sample s1,s2;
    s1.geta();
    s2.geta();


    s1.seta();
    s2.seta();

    s1.big(s2);
}