#include <stdio.h>
int main()
{
    double a = 0, b = 0, c = 0, small = 0, middle = 0, large = 0;
    
    printf("please input three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a > b) {
        middle = a;
        small = b;
    } else {
        middle = b;
        small = a;
    }
    
    if (middle > c) {
        large = middle;
    } else {
        large = c;
    }

    if (small > c){
        middle = small;
        small = c;
    } else {
        c = middle;
    }
    
    printf("\nSorting smallest to largest: %lf %lf %lf\n", small, middle, large);
    
    return 0;
}





