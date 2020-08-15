#include <stdio.h>

int main()
{
    int array[100], frequency[100];
    int size, n, m, count;
    
    printf("\nEnter the size of your array: ");
    scanf("%d", &size);
    printf("\nEnter the numbers into the array: ");
    for(n = 0; n < size; n++)
    {
        scanf("%d", &array[n]);
        frequency[n] = -1;
    }
    
    for(n = 0; n < size; n++)
    {
        count = 1;
        for(m = n + 1; m < size; m++)
        {
            if(array[n] == array[m])
            {
                count ++;
                frequency[m] = 0;
            }
        }
        if(frequency[n] != 0)
        {
            frequency[n] = count;
        }
        
    }
    printf("\nFrequency of all numbers in the array: \n");
    
    for(n = 0; n < size; n++)
    {
        if(frequency[n] != 0)
        {
            printf("\n%d occurs %d time(s)", array[n], frequency[n]);
        }
    }
    printf("\n\n");
    
    return 0;
}
