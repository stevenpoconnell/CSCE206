#include <stdio.h>
#include <math.h>
#define pi 3.1415927
int main()
{
    double  r = 0, //radius
            s = 0, //surface area
            v = 0; //volume
    
    printf("Please input a radius (meter(s)) for a sphere:\n");
    scanf("%lf", &r);
    
    s = (4 * pi) * pow(r, 2);
    v = ((4 / 3.0) * pi * pow(r, 3));
    
    printf("\nSurface area (square meters(s)): %.3lf, Volume (m^3): %.3lf\n", s, v);
    
    return 0;
}
