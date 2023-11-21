#include <bits/stdc++.h>
using namespace std;
int main()
{
    // section 1
    /*  string s = "Hello";
     cout << s.size() << endl;
     cout << s.max_size() << endl; // online compiler(10^6)
     cout << s.capacity() << endl;
     // s starts with the default capacity of 15 (results vary by compiler), then grows by about half each time.
     s = "fdkjfkdjkfjdkfjldjfldjfljslkfjdkdk";
     cout << s.size() << endl;
     cout << s.capacity() << endl; */
    // section 2
    /*  cout << "s.clear() :" << endl;
     string s1 = "Book";
     cout << s1 << endl;
     s1.clear();
     cout << s1 << endl;
     cout << s1.size() << endl;
  */
    // section 3
    /*  cout << "s.empty() :" << endl;
     if (s.empty() == true)
         cout << "Empty" << endl;
     else
         cout << "Not empty" << endl;
*/
    // section 4  s.resize()
    string s2;
    cin >> s2;                 // Hello_world
    cout << s2.size() << endl; // 11
    cout << s2 << endl;

    s2.resize(8); // Hello_wo
    cout << s2 << endl;

    s2.resize(10);
    cout << s2 << endl;
    s2.resize(8);
    s2.resize(10, 'x');
    cout << s2 << endl;
    return 0;
}