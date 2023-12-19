#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30};
    cout << mylist.size() << endl;
    cout << mylist.max_size() << endl;
    // mylist.clear();
    for (int val : mylist)
        cout << val << " ";
    if (mylist.empty() == false)
        cout << endl
             << "List empty" << endl;
    // cout << mylist.empty() << endl; // 0 or 1

    // mylist.resize(2);
    // mylist.resize(5);
    mylist.resize(5, 100);
    for (int val : mylist)
        cout << val << " ";
    return 0;
}