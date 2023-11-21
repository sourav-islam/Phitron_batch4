#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student one;
    // one.name[100] = "Sourav kabir"; // string can't assign
    char temp[100] = "Sourav kabir"; // (declaration + initialization)
    strcpy(one.name, temp);
    // strcpy(one.name, "Sourav kabir");
    one.roll = 30;
    one.cgpa = 2.39;
    cout << one.name << " " << one.roll << " " << one.cgpa << endl;
    // taking input from console
    Student two; // new object
    cin >> two.name >> two.roll >> two.cgpa;
    cout << two.name << " " << two.roll << " " << two.cgpa << endl;
    // cin always ignores spaces in string.
    getchar();
    cin. getline(two.name, 100);
    cout << two.name;
    return 0;
}
// input.txt
/* Abdur
20 3.54
Abdullah kabir */