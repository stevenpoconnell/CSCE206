#include <stdio.h>
int main()
{

    char str[256], rev[256];
    int i, j, last, length = 0;
    
    printf("\nPlease type in the characters: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        } else {
            if(str [i] >= 'A' && str[i] <= 'Z')
            {
            str[i]=str[i]+32;
            }
        }
    }
    
    printf("Convert little letters to big/big letters to little: %s",str);

    while (str[length] != '\0')
        length ++;
        last = length - 1;

    for (j = 0; j < length; j++)
    {
        rev[j] = str[last];
        last --;
    }
    
    rev[j] ='\0';
    
    printf("\nReverse the converted characters: %s \n\n",rev);
    
    return 0;
}
