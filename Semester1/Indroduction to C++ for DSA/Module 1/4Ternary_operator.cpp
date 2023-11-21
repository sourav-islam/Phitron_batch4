#include<iostream>
using namespace std;
int main()
{ // Ternary operator (Shortcut if-else)
    int x;
    cin >> x;
    ( x % 2 == 0 ) ? (cout << "even") : (cout << "odd");
    return 0;
}
    