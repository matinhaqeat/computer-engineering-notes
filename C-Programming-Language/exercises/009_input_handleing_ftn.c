#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_number(char number[])
{
    int i=0;
    while(number[i]==' ')
        i++;
    if(number[i]=='-' || number[i]=='+')
        i++;
    if (number[i]=='\0')
        return 0;
    while(number[i]>='0' && number[i]<='9')
        i++;
    while(number[i]==' ')
        i++;
    if (number[i]=='\n')
        i++;
    return (number[i]=='\0');
}

int main()
{
    char number[100]="";
    while (1)
    {
        printf("enter a number please!\n");
        fgets(number, sizeof(number), stdin);
        if(is_number(number)==1)
            break;
    }

}
