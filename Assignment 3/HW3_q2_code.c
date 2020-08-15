/* Hw3_q2_code.c
Steven O'Connell
UIN: 128002247
CSCE 206 - Section 502 */

#include <stdio.h>

float power(float n, int k)
{
    if (k == 0){
        return 1;
        
    } else {
        return power(n, k - 1)* n + 1;
    }
}

int main()
{
    float n;
    int k;
    
    printf("Please input n = ");
    scanf("%f", &n);
    printf("\nPlease input k = ");
    scanf("%d", &k);
    printf("\nSum = %f \n", power(n, k));
    
    return 0;
    
}

