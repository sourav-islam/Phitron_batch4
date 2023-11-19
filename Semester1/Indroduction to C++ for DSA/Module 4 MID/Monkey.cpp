#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {    
         sort(s, s+strlen(s));
         int sz = strlen(s);
        for (int i = 0; i < sz; i++)
        {
            // if (s[i] == ' ')
            // {
            //     continue;
            // }
             if(s[i] != ' ')
              {
                cout << s[i];
              }
            
        }
        
       cout << endl; 
      
       
    }
    
    return 0;
}