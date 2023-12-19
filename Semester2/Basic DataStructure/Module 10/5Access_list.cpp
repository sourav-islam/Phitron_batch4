#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {10, 20, 30, 40, 50};

    cout << list1.front() << endl; // head
    cout << list1.back() << endl;  // tail
    // any position
    cout << *next(list1.begin(), 2);
    return 0;
}