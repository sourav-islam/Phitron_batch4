#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {10, 10, 20, 30, 10, 40, 10, 20};
    // list1.remove(10);  // O(n)

    list1.sort(); // ace- O(nlog(n))
    // list1.sort(greater<int>()); //dsce - O(nlog(n))
    list1.unique(); // find unique , this list should be sorted
    for (int val : list1)
        cout << val << " ";
    list1.reverse();
    for (int val : list1)
        cout << val << " ";
    cout << endl;

    return 0;
}