#include<iostream>
using namespace std;

/* void my_swap(int x, int y)
{
   swap(x, y);
   cout << x << " " << y << endl;
}

int main()
{
    int x, y;
    cin >> x >> y;
    my_swap(x , y);
    
    return 0;
} */

void my_swap(int* x, int* y)
{
    int *temp = x;
      x = y;
      y = temp;
      cout << *x << " " << *y << endl;
}

int main()
{
    int x, y;
    cin >> x >> y;
    my_swap(&x, &y);
}