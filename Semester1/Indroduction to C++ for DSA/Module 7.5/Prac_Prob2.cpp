#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

void fun(Student a[], int n, int i)
{
    if (i == n)
        return;
    fun(a, n, i + 1);
    cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    int i = 0;
    fun(a, n, i);

    return 0;
}