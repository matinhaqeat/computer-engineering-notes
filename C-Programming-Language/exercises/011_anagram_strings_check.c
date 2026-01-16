#include <stdio.h>
#include <string.h>

void string_sort(char my_string[])
{
    int len=strlen(my_string);
    char temp;
    for(int i=1; i<len; i++)
    {
        for(int j=i; j>0; j--)
        {
            if (my_string[j]<my_string[j-1])
            {
                temp=my_string[j];
                my_string[j]=my_string[j-1];
                my_string[j-1]=temp;
            }
        }
    }
}

int is_anagram(char string1[], char string2[])
{
    if (strlen(string1)!=strlen(string2))
        return 0;
    string_sort(string1);
    string_sort(string2);
    if (!strcmp(string1,string2))
        return 1;
    return 0;
}

int main()
{
    char nam1[] ="manname";
    char nam2[] ="nameman";
    if (is_anagram(nam1,nam2)==1)
    {
        printf("the strings are anagram!");
    }
    else
        printf("they arent anagram!");


    return 0;
}
