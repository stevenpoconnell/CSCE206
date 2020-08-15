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
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int i, n;
    int *array;
    
    printf("How many numbers will you enter? ");
    scanf("%d", &n);
    
    array = malloc(sizeof(int)*n);
    
    printf("\nEnter your %d numbers: ", n);
    
    for(i = 0; i < n; ++i)
    {
        scanf("%d", array + i);
    }
    
    printf("\nThe original array: ");
    print(array, n);
    
    sort(array, n);
    
    printf("\nThe sorted array: ");
    print(array, n);
    printf("\n");
    
    return 0;
}
        
