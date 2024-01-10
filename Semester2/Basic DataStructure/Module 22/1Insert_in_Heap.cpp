#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curr_idx = v.size() - 1;
        while (curr_idx != 0)
        {
            int parent_idx = (curr_idx - 1) / 2;
            if (v[curr_idx] > v[parent_idx])
            {
                swap(v[curr_idx], v[parent_idx]);
            }
            else
                break;

            curr_idx = parent_idx;
        }
    }
    print(v);
    return 0;
}