#include<bits/stdc++.h>
/* #include<iostream>
#include<string> */
using namespace std;
int main()
{
    char s[100];
     int a;
    cin >> a;
   // getchar(); // a input nawor por 1ta space ba enter ignore korbe
   // cin >> s;
   //scanf("%s", s);

    //cin.get(s, sizeof(s)); 
    cin.getline(s, sizeof(s));  // get() / getline()
    cout << a << endl;
    cout << s << endl;
    return 0;
}