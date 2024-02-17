/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq1, pq2;
    while (n--)
    {
        int a;
        cin >> a;
        int even = 0, e_cnt = 1;
        int odd = 0, o_cnt = 1;
        if (a == 1)
        {
            int b;
            cin >> b;
            pq1.push(b);
        }
        else if (a == 2)
        {

            while (!pq1.empty())
            {
                int front = pq1.top();
                if (front % 2 == 0 && e_cnt == 1)
                {
                    e_cnt++;
                    even = 1;
                    cout << front << endl;
                    pq1.pop();
                    continue;
                }

                pq2.push(front);
                pq1.pop();
            }
            if (even == 0)
                cout << "empty" << endl;

            while (!pq2.empty())
            {
                pq1.push(pq2.top());
                pq2.pop();
            }
        }
        else
        {

            while (!pq1.empty())
            {
                int front = pq1.top();
                if (front % 2 == 1 && o_cnt == 1)
                {
                    o_cnt++;
                    odd = 1;
                    cout << front << endl;
                    pq1.pop();
                    continue;
                }

                pq2.push(front);
                pq1.pop();
            }
            if (odd == 0)
                cout << "empty" << endl;

            while (!pq2.empty())
            {
                pq1.push(pq2.top());
                pq2.pop();
            }
        }
    }
    return 0;
} */
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
  vector<int> v;
   while (n--)
   {
       int a;
       cin >> a;
       int even = 0, e_cnt = 1;
       int odd = 0, o_cnt = 1;
       if (a == 1)
       {
           int b;
           cin >> b;
           v.push_back(b);
       }
       else if (a == 2)
       {
            sort(v.begin(), v.end());
            for


       }
       else
       { }

   }
   return 0;
}
*/