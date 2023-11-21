#include <bits/stdc++.h>
using namespace std;
int main()
{ /*
    // 1 s+= , s.append("abc")
    string s1 = "Hello";
    string s2 = "World";
    // s1 += s2;       //s1 = s1 + s2;
    s1.append(s2);
    cout << s1 << endl;
    cout << s2 << endl;
 */
   // 2Last_index a value add and remove

   /*    string s1 = "Hello";
      string s2 = "World";
      // s1[5] = 'A';  // HelloA asbe na, karon char add korle memory expend hoi na.but string assign a hoi
      // s1 = s1 + 'A'; // HelloA asbe
      // s1 = s1 + "A"; // HelloA asbe
      s1.push_back('B'); // HelloB asbe
      cout << s1 << endl;
      s1.pop_back();   // Hello
      cout << s1 << endl;
   */
   string a = "Hello";
   // a = "HelloWorld";
   a.assign("HelloWorld");
   cout << a << endl;

   /*   // a.erase(); // delete a
     // a.erase(4); // 4 theke sob delete
     // a.erase(start index,length of delete);
     a.erase(4, 2);  //Hellorld
     cout << a << endl; // Hell
     */
   // a.replace() = a.erase + replace
   a.replace(4, 2, "Sakib");
   cout << a << endl; // HellSakiborld
   a.replace(4, 0, "o");
   cout << a << endl; // HelloSakiborld
   a.insert(10, "W");
   cout << a << endl; // HelloSakibWorld
   return 0;
}