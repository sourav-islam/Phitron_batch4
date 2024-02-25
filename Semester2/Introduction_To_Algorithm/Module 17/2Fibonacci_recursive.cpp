#include <bits/stdc++.h>
using namespace std;
const int N = 10;
int fibo[N];
int ctn = 0;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        ctn++; // base case koto bar count hocce
        return n;
    }
    return fibo[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    fib(n);

    for (int i : fibo)
        cout << i << " ";
    cout << endl;
    cout << ctn;
    return 0;
}