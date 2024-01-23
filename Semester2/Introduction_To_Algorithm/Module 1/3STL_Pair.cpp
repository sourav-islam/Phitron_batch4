/* #include <bits/stdc++.h>
using namespace std;
class Pair
{
public:
    int first, second;
    void make_pair(int a, int b)
    {
        first = a;
        second = b;
    }
};
int main()
{
    Pair p;
    p.first = 10;
    p.second = 20;
    cout << p.first << " " << p.second << endl;
    p.make_pair(30, 40);
    cout << p.first << " " << p.second << endl;
    return 0;
} */

// STL pair

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, int> p(10, 20);
    pair<int, int> p({20, 30});
    // pair<int, int> p(make_pair(40, 50));
    // pair<int, int> p = make_pair(100, 200);
    // pair<int, int> p = {(10, 20)}; // error
    cout << p.first << " " << p.second << endl;
    return 0;
}