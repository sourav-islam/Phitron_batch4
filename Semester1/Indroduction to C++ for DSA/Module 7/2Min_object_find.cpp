#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // 1.first only print the minimum marks  object values

    /* int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn)
            mn = a[i].marks;
    }
    cout << mn; */
    // 2. minimum full object values print
    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks) // ca't (a[i] < mn). kiser vittita compare korbo bole dite hobe

        {
            mn = a[i]; // copy 1 object to another
        }
    }
    // minimum mark er object
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    return 0;
}