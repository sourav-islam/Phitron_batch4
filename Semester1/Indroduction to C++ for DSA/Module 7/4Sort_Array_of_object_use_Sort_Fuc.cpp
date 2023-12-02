#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{ // 1 choto the boro
    /* if (a.marks >= b.marks)
        return true; // condition tai ture/false dai so, return a.marks <= b.marks
    else
        return false; // false hoile sort kore, true mane jai vabe chai sei vabe ace. */
    // return a.marks <= b.marks;

    // 2 marks boro theke choto but marks same hole jai id choto sai aga print hobe
    /*     if (a.marks > b.marks)
            return true;
        else if (a.marks < b.marks)
            return false;
        else // a.marks == b.marks
        {
            //  if (a.roll < b.roll)
            //     return true;
            // else
            //     return false;
            return a.roll < b.roll;
        } */
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
        return a.marks > b.marks;
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
    // 5
    // Rifat 10 90
    // Sifat 11 90
    // Akib 12 96
    // Sakib 13 85
    // Rakib 9 90
    // Q - sorting marks decreasing order.if the marks are same sort them based on minimum roll

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}