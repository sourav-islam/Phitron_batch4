#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s2 = "hello";
    int count = 0;
    /*  for (int i = 0; i < s2.size(); i++)
     {
         for (int j = 0; j < s.size(); j++)
         {
             if (s2[i] == s[j])
             {
                 count++;
                 break;
             }
         }
     } */

    // hello subsequence of ahhellllloou
    // but not hlelo
    int i = 0, j = 0;
    while (i < s.size())
    {
        if (s[i] == s2[j])
        {
            i++;
            j++;
            count++;
        }
        else
            i++;
    }

    if (count == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}