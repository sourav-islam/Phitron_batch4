#include<bits/stdc++.h>
using namespace std;

class Student
{
   public:
      char name[100];
      int roll;
      double cgpa;
    Student()
    {
        cout << "Default Constructor" << endl;
    }

};
int main()
{
    Student a, b;
    // when object is created, a default constructor[Student(){}] must called.
    return 0;
}