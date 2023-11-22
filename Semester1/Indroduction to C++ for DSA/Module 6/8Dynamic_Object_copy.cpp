#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        // (*this).name = name;
        this->name = name;
        this->age = age;
    }
};
int main()
{
    person *rakib = new person("rakib ahmed", 40);
    person *sakib = new person("Sakib Hasan", 20);

    // rakib = sakib; // don't do this. sakib points to Rakib. if rakib delete sakib also deleted

    /* cout << rakib->name << " " << rakib->age << endl;

   // delete rakib;
    cout << rakib->name << " " << rakib->age << endl;  // segmentation fault*/

    // 2 ways to copy
    //   rakib->name = sakib->name;
    //   rakib->age = sakib->age;
    // or
    *rakib = *sakib; // all data copied
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}