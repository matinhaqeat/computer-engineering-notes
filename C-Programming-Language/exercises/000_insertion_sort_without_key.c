#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scores[]={12,13,14,67,34,6,567,45};
    int length= sizeof(scores)/sizeof(scores[0]);
    //printing the unsorted list:
    printf("u_list: ");
    for(int i=0; i<length; i++)
    {
        printf("%5d ",scores[i]);
    }
    //sorting the list:
    for (int i=1; i<length; i++)
    {
        int takas;
        for (int j=i; j>0; j--)
        {
            if (scores[j]<scores[j-1])
            {
                takas= scores[j];
                scores[j]=scores[j-1];
                scores[j-1]=takas;
            }
        }
    }
    //printing the sorted list:
    printf("\ns_list: ");
    for(int i=0; i<length; i++)
    {
        printf("%5d ",scores[i]);
    }
}
