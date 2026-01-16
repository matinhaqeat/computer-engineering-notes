/**is does the same thing as strod**/
#include <stdio.h>
#include <string.h>
//checks if a string is a number->and then turns it to a number!


double string_to_float(char string[22])
{
    double number=0;
    int sign= 1;
    int i = 0;
    while(string[i]==' ')
        i++;
    if (string[i]=='+')
        i++;
    else if(string[i]=='-')
    {
        i++;
        sign = -1;
    }
    while(string[i]<='9' && string[i]>= '0')
    {
        number = number * 10 + (string[i]-'0');
        i++;
    }
    if(string[i]=='.')
        i++;
    double divisor=10;
    while(string[i]<='9' && string[i]>= '0')
    {
        number = number + (string[i]-'0') / divisor;
        divisor = divisor * 10;
        i++;
    }
    return number * sign;
}

int is_number(char string[])
{
    int i = 0;
    int warning=0;
    if(string[i]=='\0')
        return 0;
    while (string[i]==' ')
        i++;
    if(string[i]=='\0')
        return 0;
    if (string[i]=='+' || string[i]=='-')
        i++;
    while(string[i]<='9' && string[i]>= '0')
    {
        i++;
        warning++;
    }
    if (string[i]=='.')
        i++;
    while(string[i]<='9' && string[i]>= '0')
    {
        i++;
        warning++;
    }
    while (string[i]==' ')
        i++;
    if (string[i]=='\0')
        if(warning!=0)
            return 1;
        else
            return 0;
    else
        return 0;
}


int main()
{
    char average[51];
    double average_n;
    printf("enter a number!");
    while(1)
    {
        gets(average);
        if(is_number(average))
        {
            average_n= string_to_float(average);
            break;
        }
        printf("plese enter a valid input!\n");
    }
    printf("\nthe number u entered: %lf", average_n);
}


