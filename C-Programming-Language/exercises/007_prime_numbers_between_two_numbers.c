#include <stdio.h>
#include <math.h>

int prime_range(int dizi[], int min, int max)
{
    int count=0;
    min=(min<2)?2:min;
    max=(max<2)?2:max;
    if (min>max)
    {int temp= max;max= min;min= temp;}


    for(;min<=max; min++)
    {
        int is_prime=1;
        int i;
        for(i=2; i<=sqrt(min); i++)
        {
            if (min%i==0)
            {
                is_prime--;
                break;
            }
        }
        if(is_prime)
            dizi[count++]=min;
    }
    return count;

}

void print_the_list(int dizi[], int count)
{
    for (int i=0; i<count; i++)
    {
        printf("%d, ",dizi[i]);
    }
}
int main()
{
    int max,min;
    printf("enter max please!\n");
    scanf("%d",&max);
    printf("\nenter min please!\n");
    scanf("%d",&min);

    int dizi[100]={0};
    int count= prime_range(dizi, min, max);
    print_the_list(dizi, count);
    return 0;
}
