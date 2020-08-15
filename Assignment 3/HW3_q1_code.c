#include <stdio.h>

#include <stdio.h>
int main()
{
    int n, x, y, z;
    printf("The special numerics between 100 and 999 are:\n");
    for (n = 100; n <= 999; n++)
    {
        x = n/100;
        y = (n/10) % 10;
        z = n % 10;
        if (x * x * x + y * y * y + z * z * z == n)
        {
            printf("%d \n", n);
        }
        
    }
    return 0;
}
