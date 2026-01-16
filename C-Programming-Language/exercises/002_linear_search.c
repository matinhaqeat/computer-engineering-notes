#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


//linear search:
//working with intigers:

void value_my_list( int arr[], int size, int max, int min)
{
    for(int i=0; i<size; i++)
        arr[i]=(rand()%(max-min+1))+min;
}

void print_my_list( int arr[], int length, int pathing)
{
    for(int i =0; i<length; i++)
        printf("%*d ",pathing,arr[i]);
}

void sort_my_list(int arr[], int length)
{
    int takas;
    for(int i=1; i<length; i++)
    {
        for(int j=i; j>0; j--)
            if(arr[j]<arr[j-1])
            {
                takas = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = takas;
            }
    }
}

int find_indix(int arr[], int length, int search, int indicis[])
{
    int k=0;
    for(int i=0; i<length; i++)
    {

        if (arr[i]==search)
        {
            indicis[k]=i;
            k++;
        }
    }
    return k;
}



int main()
{
    srand(time(NULL));
    int scores[]={1,4,7,45,3,6,1,7,45,1,1,1,56,8,63};
    int length =sizeof(scores)/sizeof(scores[0]);
    printf("u_list: \n");
    print_my_list(scores,length,4);
    printf("\ns_list: \n");
    sort_my_list(scores,length);
    print_my_list(scores,length,4);

    int indices_1[length];
    int counter_1=find_indix(scores,length,1,indices_1);
    if (counter_1==0)
        printf("there is no '1' in the list!");
    else
    {
        printf("\nindices are:");
        for(int i=0; i<counter_1; i++)
            printf("%d\t",indices_1[i]);
    }
}
