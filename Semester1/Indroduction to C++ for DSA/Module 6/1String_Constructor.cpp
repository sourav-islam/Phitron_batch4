#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout << s << endl; // Hello World
    // 1
    string s1("Hello Bangladesh");
    cout << s1 << endl; // Hello Bangladesh
    // 2
    string s2("Hello", 3);
    cout << s2 << endl; // Hel
    // 3
    string a = "Hello World";
    string s4(a, 3);
    cout << s4 << endl; // lo World
    // 4
    string s3(10, 'A');
    cout << s3 << endl; // AAAAAAAAAA
    return 0;
}