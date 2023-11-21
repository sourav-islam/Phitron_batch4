#include<iostream>
using namespace std;
int main()
{
    char s[100];
    //cin >> s;  // latest mingw doesn't support cin to get input. use getline()/get()
    // cin can't read multiple words.( Hello world)

    cin.getline(s, 100);
    //cin.get(s, 100);
    cout << s << endl;
    return 0;
}