#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
    // intput: 50 20
    //         30 10
    //         40 20
     int a, b;
    
    while (scanf("%d %d", &a, &b ) != EOF)
    {
        printf("%d %d\n", a, b);
    }
    // EOF not needed in c++
    /* while (cin >> a >> b)   //
    {
        cout << a << " " << b << endl;
    } */
    
    // Set Precision #include < iomanip>
     double d = 12.344354553;
    // printf("%.3lf\n", d);
    cout << Fixed << setprecision(3) << d << endl; // sobar prothom print hocce, i don't know.
    return 0;
}