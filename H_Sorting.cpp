#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n]; // in c++ 11 array size can't variable size.so get Compilation error
  /*   for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i] > ar[j])                  
            {
                swap(ar[i], ar[j]);
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    } */
    
    
    
    return 0;
}