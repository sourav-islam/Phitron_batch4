#include <iostream>
#define ll long long
using namespace std;

bool reach(ll n, ll a)
{
    if (n == a)
        return true;
    if (a > n)
        return false;
    bool op1 = reach(n, a * 10);
    bool op2 = reach(n, a * 20);
    return op1 || op2;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (reach(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
