#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1
    list<int> mylist;
    cout << mylist.size() << endl; // 0
    // 2
    list<int> mylist1(10);
    cout << mylist1.size() << endl; // 10
    // 3
    list<int> mylist2(10, 5);
    cout << mylist2.front() << endl; // can't mylist[0];
                                     /*  for(int i = 0; i< mylist2.size(); i++)
                                      {
                                          cout << mylist2[i] << endl; // can't mylist[i]
                                      } */
                                     //   so, need iterator
    for (auto it = mylist2.begin(); it != mylist2.end(); it++)
    {
        cout << *it << " "; // 5 5 5 5 5 5 5 5 5 5
    }
    cout << endl;
    // 4
    list<int> mylist3 = {10, 20, 30, 40, 50};
    list<int> mylist4(mylist3);

    for (auto it = mylist4.begin(); it != mylist4.end(); it++)
    {
        cout
            << *it << " ";
    }
    cout << endl;
    // 5
    int a[3] = {100, 200, 300};
    list<int> mylist5(a, a + 3);
    for (auto it = mylist5.begin(); it != mylist5.end(); it++)
    {
        cout
            << *it << " ";
    }
    cout << endl;
    // 6
    vector<int> v = {-1, -2, -3};
    list<int> mylist6(v.begin(), v.end());
    for (auto it = mylist6.begin(); it != mylist6.end(); it++)
    {
        cout
            << *it << " ";
    }
    cout << endl;
    // but if only need value(no pointer) of the list, use range based for loop
    for (int val : mylist6)
    {
        cout << val << " ";
    }
    return 0;
}