#include<iostream>
//using namespace std;
int main()
{
    // taking input
    int a, b ;
   std:: cin >> a >> b;

  std:: cout << a << " " << b << "\n";
    
    char ch = '0';
    int x = ch;  // explicit type conversion
    std:: cout << x <<"\n";

    float x2 = int(ch); // implecit type casting
    std :: cout << x2 << " -> " << char(x2)<<"\n";

    double d = 2.459499559;
    std:: cout << int(d)<< "\n";
    // long long int(a) is wrong, cause multiple words in this data type. so correct is (long long int)(a)

    std:: cout << (long long int)(a) << "\n";
    return 0;
}