// References in string
#include <bits/stdc++.h>
using namespace std;

void print(string &s) // check s and &s
{
    s = "gello";
}
int main()
{
    string s = "hello";
    print(s);
    cout << s << endl;
    return 0;
}