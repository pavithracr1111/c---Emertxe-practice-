/* passing arguments to member function */

#include <iostream>
#include <string.h>

using namespace std;

class emp
{
    int eid;
    char ename[20];

public:
    void getemp(int id, char name[20]);
    void setemp();
};
void emp ::getemp(int id, char name[20])
{
    eid = id;
    strcpy(ename, name);
}

void emp ::setemp()
{
    cout << eid << endl
         << ename;
}

int main()
{
    emp e1;
    e1.getemp(101, "Pavi");
    e1.setemp();
}