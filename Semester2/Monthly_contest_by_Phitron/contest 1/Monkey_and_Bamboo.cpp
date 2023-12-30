
#include <bits/stdc++.h>
#define ll long long
// #define is a preprocessor directive that allows you to define constants or macros. In the statement #define ll long long, the purpose is to create an alias or shortcut for the data type long long. make the code more readable and concise.
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, a, b;
        cin >> h >> a >> b;

        if (h <= a)
        {
            cout << 1 << endl;
        }

        else if (a > b)
        {
            ll mins = ceil((h - a) * 1.0 / (a - b) * 1.0);
            mins = (mins * 2) + 1;
            cout << mins << endl;
        }
        else // a < b and a = b
        {
            cout << "Impossible" << endl;
        }
    }
}

/* h: Total length of the bamboo (92 feet in the sample).
a: Distance climbed in one minute (12 feet in the sample).
b: Distance slid down in one minute (8 feet in the sample)

ceil((h - a) * 1.0 / (a - b) * 1.0);

This part calculates how many cycles of climbing and sliding are needed to cover the remaining distance, rounding up to the nearest whole number.

Total minutes=ans×2+1

ans
ans: The result from the previous formula.
×2: Because each cycle involves climbing up and sliding down(1+1 = 2 minutes)
+1: To account for the extra minute needed for the last climb. */