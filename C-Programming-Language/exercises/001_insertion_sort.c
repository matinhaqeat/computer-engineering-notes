#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


//insertion sorting:

void value_my_list( double arr[], int size, int max, int min, int decimal)
{
    for(int i=0; i<size; i++)
        arr[i]=(rand()%(10*decimal))/(10.0*decimal) + (rand()%(max-min))+min;
}

void print_my_list( double arr[], int length)
{
    for(int i =0; i<length; i++)
        printf("%.2lf \t",arr[i]);
}

void sort_my_list(double arr[], int length)
{
    double takas;
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



int main()
{
    srand(time(NULL));
    double my_list[5]={0};
    int length = sizeof(my_list)/sizeof(my_list[0]);
    value_my_list(my_list,length, 100,0,2);
    printf("unsorted list:\n");
    print_my_list(my_list,length);
    sort_my_list(my_list,length);
    printf("\nsorted list:\n");
    print_my_list(my_list,length);

}
