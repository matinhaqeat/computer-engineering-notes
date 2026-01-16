#include <stdio.h>
int main()
{
    int numbers[]={19,3,15,7,11,9,13,5,17,1};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    for(int i=0; i<length; i++)
    {
        printf("%d. eleman degeri: %6d-->",i,numbers[i]);
        for(int j=0; j<numbers[i]; j++)
            printf("|");
        printf("\n");
    }
    return 0;
}
