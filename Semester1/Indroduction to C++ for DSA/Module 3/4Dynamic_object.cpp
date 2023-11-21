#include<bits/stdc++.h>
using namespace std;

class Student
{
   public:
      char name[100];
      int roll;
      double cgpa;

    Student(char n[100], int r, double d)
    {
        // name = n;
        strcpy(name, n);
        roll = r;
        cgpa = d;
    }

};
int main()
{
    char s[100] = "Rakib ahmed";
    Student* one = new Student(s, 20, 3.49);
    //Dynamic objects
     cout << one->name << " " << one->roll << " " << one->cgpa << endl;
    return 0;
}