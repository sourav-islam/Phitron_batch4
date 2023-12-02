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
    // 5
    // Rifat 10 90
    // Sifat 11 90
    // Akib 12 96
    // Sakib 13 85
    // Rakib 9 90
    // Q - sorting marks decreasing order.if the marks are same sort them based on minimum roll
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                swap(a[i], a[j]);
            }
            if (a[i].marks == a[j].marks)
            {
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}