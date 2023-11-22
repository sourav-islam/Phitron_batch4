#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }

    void print()
    {
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};
int main()
{
    person rakib("Rakib ahmed", 93, 45, 55);
    // cout << rakib.name << " " << rakib.age << endl;
    rakib.print();

    cout << rakib.total_marks();
    return 0;
}