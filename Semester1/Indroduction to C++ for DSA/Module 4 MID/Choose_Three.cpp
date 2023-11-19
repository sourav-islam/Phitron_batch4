#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int ar[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
        } 
          int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
              
            for (int j = i+1; j < n - 1; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                   if((ar[i] + ar[j] + ar[k] == s)) 
                     {
                        flag = 1;  
                     }  
                     
                }
            }  

        }
       

       if(flag == 1)
       {
        cout << "YES" << endl;
       }
       else 
         cout << "NO" << endl;  
    }

    return 0;
}