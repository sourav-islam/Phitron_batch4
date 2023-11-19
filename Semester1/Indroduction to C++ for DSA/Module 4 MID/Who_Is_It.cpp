#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int id;
  char name[100];
  char section;
  int t_marks;
};
int main()
{
  int t;
  cin >> t;
  Student s1, s2, s3;
  for (int i = 0; i < t; i++)
  {
    
    cin >> s1.id >> s1.name >> s1.section >> s1.t_marks;
    cin >> s2.id >> s2.name >> s2.section >> s2.t_marks;
    cin >> s3.id >> s3.name >> s3.section >> s3.t_marks;

    if(s1.t_marks > s2.t_marks && s1.t_marks > s3.t_marks)
    {
      cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.t_marks << endl;
    }

    else if(s2.t_marks > s1.t_marks && s2.t_marks > s3.t_marks)
    {
      cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.t_marks << endl;
    }

    else if(s3.t_marks > s1.t_marks && s3.t_marks > s2.t_marks)
    {
      cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.t_marks << endl;
    }
    else if (s1.t_marks == s2.t_marks && s2.t_marks == s3.t_marks && s3.t_marks == s1.t_marks)
    { 
      if( s1.id < s2.id && s1.id < s3.id)
        cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.t_marks << endl;
      else if( s2.id < s1.id && s2.id < s3.id)
        cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.t_marks << endl;
      else
        cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.t_marks << endl;  
    }
    else
      {
        if (s1.t_marks == s2.t_marks)
        {
          if( s1.id < s2.id)
           cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.t_marks << endl;
           else
           cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.t_marks << endl;
        }
        else if (s2.t_marks == s3.t_marks)
        {
          if( s2.id < s3.id)
           cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.t_marks << endl;
           else
           cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.t_marks << endl;
        }
        else
         { 
           if( s1.id < s3.id)
           cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.t_marks << endl;
           else
           cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.t_marks << endl;
         }
        
      } 
    
  }
  return 0;
}