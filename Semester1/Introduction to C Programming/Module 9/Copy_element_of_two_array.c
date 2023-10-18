 #include<stdio.h>
 int main()
 {
     
     int n,m;
     scanf("%d %d", &n,&m);
   
     // n array and m array inputs 
     
      int arr[n];
     for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
     }

     int ar[m];
     for (int i = 0; i < m; i++)
     {
        scanf("%d", &ar[i]);
     }
     
     // new array
     int newarr[n+m];

     for (int i = 0; i < n; i++)
     {
         newarr[i] = arr[i];
     }
     for (int i = n, j = 0; i < n+m, j<m; i++, j++)
     {
        newarr[i] = ar[j];
     }
     //print new array

     for (int i = 0; i < n+m; i++)
     {
        printf("%d ", newarr[i]);
     }
     
     

     
 
     return 0;
 }