#include<bits/stdc++.h>
using namespace std;
int main()
{/*  //1 character array string
    char a[10] = "Hello";
    //a =  "Gello"; // char array can't assign
    strcpy(a, "Gello");
    cout << a << endl;
    cout << strlen(a) << endl;
    
    char b[10] = "Hello";
    // a += b; 
    // a += "b"; 
    // a += 'b'; //char concate
    //  a = b;

    // if(strcmp(a,b) == 0)
    if( a==b) cout << "Same"; 
    else cout << "not same";
  */

 //2 String in c++
 
  string s1 = "Allah"; // s must small letter
  cout << s1 << endl;
  s1 = "Akbar";
  cout << s1 << endl;
  s1 = "Allahu Akbar Kabira ";
  cout << s1 << endl;
  // size auto increase in string

  string s2 = "Almighty";
    if( s1==s2) cout << "Same\n"; 
    else cout << "not same\n";
 
   cout << s1+s2 << endl;
   //cout << s1-s2 << endl; // can't s1-s2
   
    return 0;
}