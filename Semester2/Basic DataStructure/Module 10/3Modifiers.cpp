#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30};
    list<int> list1;
    // list1 = mylist;
    list1.assign(mylist.begin(), mylist.end());
    for (int val : list1)
        cout << val << " ";
    // head or tail e insert and delete
    cout << endl;
    // mylist.push_front(100);
    mylist.push_back(100);
    // mylist.pop_front();
    // mylist.pop_back();
    for (int val : mylist)
        cout << val << " ";
    // insert at position
    cout << endl;
    //    mylist.insert(mylist.begin() + 2, 300); // error no index
    // mylist.insert(next(mylist.begin(), 2), 300); // check 0, 4, 6. cyclick order
    // mylist.insert(next(mylist.begin(), 2), {500, 600, 700});
    // mylist.insert(next(mylist.begin(), 2), list1.begin(), list1.end());
    vector<int> v = {1000, 2000}; // array o nita pari
    mylist.insert(next(mylist.begin(), 2), v.begin(), v.end());
    for (int val : mylist)
        cout << val << " ";

    // delete at position in linked list
    cout << endl;
    mylist.erase(next(mylist.begin(), 4));
    // mylist.erase(next(mylist.begin(), 0), next(mylist.begin(), 2));
    for (int val : mylist)
        cout << val << " ";

    // replace and find
    cout << endl;
    list<int> list2 = {0, 1, 2, 4, 2, 3, 2, 9, 2};
    replace(list2.begin(), list2.end(), 2, 100);
    for (int val : list2)
        cout << val << " ";
    cout << endl;
    auto it = find(list2.begin(), list2.end(), 10);
    // cout << *it << endl;
    if (it == list2.end())
        cout << "Not found";
    else
        cout << "found";
    return 0;
}