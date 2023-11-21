#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
   /*  int a, b;
    cin >> a >> b;
    // min and max ( between 2 values )
   int var = min(a,b);
    cout << var << endl;
    // multiple values
    int c, d;
    cin >> c >> d;  // i/p: 40 61 20 96
    int mx = max({a, b, c, d});
    int mn = min({a, b, c, d});
    cout <<"Max: "<< mx << " Min: " << mn;
     */

    int x,y;
    cin >> x >> y;
    swap(x,y);
    cout << x << " " << y << endl;
    return 0;
}