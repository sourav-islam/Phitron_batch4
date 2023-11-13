#include<iostream>
using namespace std;
int main(){
char ch;
cin >> ch;
if(ch >= '0' && ch <= '9')
  {
      cout << "IS DIGIT";
  }
else
  {
      cout << "ALPHA\n";
      (ch >= 'A' && ch <= 'Z') ? (cout << "IS CAPITAL"): (cout << "IS SMALL");
  }
}