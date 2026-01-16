#include <stdio.h>
#include <string.h>
#include <ctype.h>

 int digit_index(char s)
 {
     if(s>='0' && s<='9')
        return s-'0';
     if(s>='a' && s<='z')
        return s-'a'+10;
     if(s>='A' && s<='Z')
        return s-'A'+10;
    return -1;
 }

unsigned long long to_base_ten(char string[] , int base)
{
    unsigned long long number=0;
    int digit=1;
    for(int i = strlen(string)-1; i>=0; i--)
    {
        number += digit_index(string[i])*digit;
        digit *= base;
    }
    return number;
}

int validity(char string[], int base)
{
    int length = strlen(string);
    if (length>12 || length<=0)
        return 0;
    if (base < 2 || base > 36)
        return 0;
    for(int i = length-1; i>=0; i--)
    {
        int d = digit_index(string[i]);
        if ( d>=base || d<0 )
            return 0;
    }
    return 1;
}


int main()
{
    /*
    char number1[51]= "afAFDA";
    if (validity(number1,36))
    {
        unsigned long long my_number = to_base_ten(number1, 36);
        printf("%.llu", my_number);
    }
    else
        printf("invalid base for the number u entered!");

    return 0;
    */
    printf("---*Base change program*---");
    unsigned long long number;
    char string_number[51];

    while(1)
    {
        printf("enter ur number, please!");
        ///calismalar devam etmektedir!
    }

}
