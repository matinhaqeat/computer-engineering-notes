#include <stdio.h>
#include <string.h>

void print_my_list(int list[],int s)
{
    printf("[");
    for(int i=0; i<s-1; i++)
    {
        printf("%d, ",list[i]);
    }
    printf("%d]\n",list[s-1]);
}

void sort_my_list(int list[], int s)
{
    int temp;
    for(int i=0; i<s; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(list[j]<list[j-1])
            {
                temp=list[j];
                list[j]=list[j-1];
                list[j-1]=temp;
            }
        }
    }
}

void combine(int list1[], int s1, int list2[], int s2, int list1_2[])
{
    int i=0, k1=0,k2=0;
    while(k1<s1 && k2<s2)
    {
        if (list1[k1]<=list2[k2])
            list1_2[i++]=list1[k1++];
        else
        list1_2[i++]=list2[k2++];
    }
    while(k1<s1)
    {
        list1_2[i++]=list1[k1++];
    }
    while(k2<s2)
    {
        list1_2[i++]=list2[k2++];
    }
}


int main()
{
    int s1,s2;
    printf("we get two lists and combine them here!\n");
    printf("enter the size of the first list!");
    scanf("%d",&s1);
    printf("enter the size of the second list!");
    scanf("%d",&s2);
    int list1[s1];
    int list2[s2];

    printf("enter elements for the first list, please!\n");
    for(int i=0; i<s1; i++)
    {
        scanf("%d",&list1[i]);
    }
    printf("enter elements for the second list, please!\n");
    for(int i=0; i<s2; i++)
    {
        scanf("%d",&list2[i]);
    }
    printf("your first list:\n");
    print_my_list(list1,s1);
    printf("\nyour second list:\n");
    print_my_list(list2,s2);

    sort_my_list(list1,s1);
    sort_my_list(list2,s2);
    printf("\n\nyour first list(sorted):\n");
    print_my_list(list1,s1);
    printf("\nyour second list(sorted):\n");
    print_my_list(list2,s2);

    int m=s1+s2;
    int list1_2[m];
    combine(list1,s1,list2,s2,list1_2);
    printf("combined list(sorted):\n");
    print_my_list(list1_2,m);
    return 0;
}
