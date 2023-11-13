#include <iostream>
int main()
{
    // printing command
    std::cout << "Assalamu Alaikum" 
              << std::endl << "valo acen\n";

    // variables 
    int a = 10;
    long long b = 1000000000;
    float f = 1.52;
    double d = 1.49502439;
    // printing with c
    //printf("%d", a);
    std::cout << "%d" << a << "\n"; // c++ kono formate specifier nai.
    std::cout << "value of b:" << b << " " << "f:" << f << " d:" << d << std:: endl;

    char ch = 'A';
    std::cout << ch;

    return 0;
}