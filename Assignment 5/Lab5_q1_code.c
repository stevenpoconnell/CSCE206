#include <stdio.h>
#include <math.h>

double get_hex(char *c)
{
    int i = 0;
    int hex_val = 0;
    double sum = 0;
    int n = 0;
    
    while (c[i] != '\0')
    {
        i++;
    }
    i--;
    while (i > -1)
    {
        switch (c[i])
        {
            case '0':
                hex_val = 0;
                break;
            case '1':
                hex_val = 1;
                break;
            case '2':
                hex_val = 2;
                break;
            case '3':
                hex_val = 3;
                break;
            case '4':
                hex_val = 4;
                break;
            case '5':
                hex_val = 5;
                break;
            case '6':
                hex_val = 6;
                break;
            case '7':
                hex_val = 7;
                break;
            case '8':
                hex_val = 8;
                break;
            case '9':
                hex_val = 9;
                break;
            case 'A':
                hex_val = 10;
                break;
            case 'B':
                hex_val = 11;
                break;
            case 'C':
                hex_val = 12;
                break;
            case 'D':
                hex_val = 13;
                break;
            case 'E':
                hex_val = 14;
                break;
            case 'F':
                hex_val = 15;
                break;
        }
        sum += hex_val*pow(16,n);
        n++;
        i--;
    }
    return sum;
}

int main()
{
    char c[256];
    char number1[256];
    char number2[256];
    char op;
    double result = 0;
    
    printf("\nPlease input a hex formula: ");
    scanf("%s",c);
    
    int i = 0;
    while(c[i] != '+' && c[i] != '-' && c[i] != '*' && c[i] != '/')
    {
        number1[i] = c[i];
        i++;
    }
    number1[i] = '\0';
    op = c[i];
    i++;
    int j = 0;
    
    while (c[i] != '\0')
    {
        number2[j] = c[i];
        j++;
        i++;
    }
    printf("\nThe two hex numbers are %s and %s", number1, number2);
    
    double n1 = get_hex(number1);
    double n2 = get_hex(number2);
    
    printf("\nThe corresponding integers are %lf and %lf", n1, n2);
    
    if(op == '+')
    {
        result = n1 + n2;
    } else if(op == '-')
            {
                result = n1 - n2;
            } else if(op == '*')
                    {
                        result = n1 * n2;
                    } else if(op == '/')
                            {
                                result = n1 / n2;
                            }
    printf("\nResult in decimal: %lf \n", result);

    return 0;
}
