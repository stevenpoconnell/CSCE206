#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int size)
{
   int i, j, temp;
   for(i = 0; i < size; ++i)
   {
       for(j = 0; j < size - 1; ++j)
       {
           if(array[j] > array[j+1])
           {
               temp = array[j];
               array[j] = array[j+1];
               array[j+1] = temp;
           }
       }
   }
}

void print(int *array, int size)
{
   int i;

   for(i = 0; i < size; ++i)
   {
       printf("%d", array[i]);
   }
   printf("\n");
}

int main()
{
   int i, n;
   int *array;
    
   printf("How many nbers do you want to enter? ");
   scanf("%d", &n);
    
   array = malloc(sizeof(int)*n);
    
   printf("Enter %d nbers: ", n);
    
   for(i = 0; i < n; ++i)
   {
       scanf("%d", array+i);
   }
    
   printf("Original arrayay: ");
   print(array, n);
   sort(array, n);
    
   printf("Sorted arrayay: ");
   print(array, n);
    
   return 0;
}
