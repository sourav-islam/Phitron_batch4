#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
    /* Student(char n[100], int r, double d)
    {
        // name = n;
        strcpy(name, n);
        roll = r;
        cgpa = d;
    } */

    Student(char name[100], int roll, double cgpa)
    {
        // name = n;
        strcpy(this->name, name);
       this-> roll = roll;         // class variable name and parameters name same hoe (this pointer use korte hoi)
        this->cgpa = cgpa;
    }
};
int main()
{
   // Student one("Rakib ahmed", 20, 3.49); //warning: c++ forbids string passing. so given statement
    char s[100] = "Rakib ahmed";
    Student one(s, 20, 3.49);
    cout << one.name << " " << one.roll << " " << one.cgpa << endl;
    return 0;

}

