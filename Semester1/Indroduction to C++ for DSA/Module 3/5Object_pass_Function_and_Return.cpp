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

Student* fun(Student *one , Student *two){
     /* one->cgpa > two->cgpa? (cout << "Student one good") :(cout << "Student two good"); */
  /* cout << (one->cgpa > two->cgpa?  one->cgpa : two->cgpa) << " is highest cgpa"; */

  return one->cgpa > two->cgpa? one: two;
}
int main()
{
    char s[100] = "Rakib ahmed";
    Student* one = new Student(s, 20, 3.49);
    Student* two = new Student(s, 21, 3.59);
    // cout << one->name << " " << one->roll << " " << one->cgpa << endl;
    //fun( one , two );
  Student* ans = fun( one , two);
  cout << ans->cgpa << " is highest cgpa";
    return 0;
}