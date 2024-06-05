/* passing arguments to member function */
#include <iostream>
#include <string.h>
using namespace std;

class emp
{
    int eid;
    char ename[20];
    float esalary;

public:
    void get(int id, char name[20], float salary);
    void set()
    {
        cout << "Id : " << eid << endl;
        cout << "Name : " << ename << endl;
        cout << "Salary : " << esalary << endl;
    }
};

void emp ::get(int id, char name[20], float salary)
{
    eid = id;
    strcpy(ename,name);
    esalary = salary;
}
int main()
{
    emp e1;
    e1.get(101, "Pavi", 12.3);
    e1.set();
}