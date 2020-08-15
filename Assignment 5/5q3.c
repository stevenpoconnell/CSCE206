#include <stdio.h>
#include <stdlib.h>

int main()
{
   int** array;
   int n, m, i, j, min, max;
   
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   
   printf("Enter the number of columns: ");
   scanf("%d",&m);
   
   array = (int**)malloc(sizeof(int*)*n);
   for(i = 0; i < n; i++)
   {
      array[i] = (int*)malloc(sizeof(int)*m);
   }
   
   printf("Enter %d numbers:\n",(n * m));
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < m; j++){
         scanf("%d", &array[i][j]);
      }
   }
   
   min = array[0][0];
   max = array[0][0];
    
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < m; j++)
      {
         if(min > array[i][j])
         {
            min = array[i][j];
         }
         if(max < array[i][j])
         {
            max = array[i][j];
         }
      }
   }
   
   printf("Minimum = %d\n",min);
   printf("Maximum = %d\n",max);
   
    return 0;
}
