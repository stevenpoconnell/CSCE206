#include <stdio.h>

int get_value(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    } else {
        if (ch >= 'A' && ch <= 'F') {
            return 10 + (ch - 'A');
        }
        return 10 + (ch - 'a');
    }
}

int main()
{
    long value = 0;
    int i = 0;
    char str[100];
    
    printf("Please input a hex number: ");
    scanf("%s", str);
    
    while (str[i] != '\0') {
        value = value * 16;
        value += get_value(str[i]);
        i++;
    }
   
    printf("Its corresponding decimal is %ld \n", value);
    
    return 0;
}
