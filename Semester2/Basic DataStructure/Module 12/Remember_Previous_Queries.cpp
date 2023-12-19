#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list1;
    int q;
    cin >> q;
    int x, v;
    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            list1.insert(next(list1.begin(), x), v);
        }
        else if (x == 1)
        {
            list1.insert(next(list1.begin(), list1.size()), v);
        }
        else
        {
            if (v >= list1.size())
            {
            }
            else
                list1.erase(next(list1.begin(), v));
        }

        cout << "L -> ";
        for (int val : list1)
            cout << val << " ";
        cout << endl;
        list1.reverse();
        cout << "R -> ";
        for (int val : list1)
            cout << val << " ";
        cout << endl;
        list1.reverse();
    }

    return 0;
}