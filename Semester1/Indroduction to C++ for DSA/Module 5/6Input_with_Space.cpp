#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    // cin.ignore(); // getchar();
    string s;
    // cin >> s; // without spaces
    // cin.getline(s, 100); // its for char a[]
    getline(cin, s); // with spaces
    cout << x << endl;
    cout << s << endl;
    cout << s.size() << endl;
    return 0;
}