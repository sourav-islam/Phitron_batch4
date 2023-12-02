#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

void fun(Student a[], int n, int i)
{
    while (i < n)
    {
        swap(a[i].s, a[n - 1].s);
        i++;
        n--;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    int j = 0;
    fun(a, n, j);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}