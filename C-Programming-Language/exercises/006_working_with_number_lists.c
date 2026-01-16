#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){

    int size;
    int takas;
    printf("enter the size of the list u want to create!\n");
    scanf("%d",&size);
    int list[size]={};
    //taking the elements of the list:---------------------------------------------------
    printf("do u want to enter the elemnts(0) or ramdom numbers(1)?");
    int choice;
    scanf("%d",&choice);
    if(choice==0)
    {
        printf("enter the elements of your list in order!\n");
        for(int i=0; i<size; i++)
        {
            printf("enter the element number %d: ",i+1);
            scanf("%d",&list[i]);
        }
    }
    else
    {
        srand(time(NULL));
        for(int i=0; i<size; i++)
        {
            list[i]= rand()%100+1;
        }
    }
    //printing the elements of the list--------------------------------------------------
    printf("your list is as follow:\n");
    for( int i=0; i<size; i++)
    {
        printf("%d\t",list[i]);
    }
    //sorting the list using insertion sorting:------------------------------------------
    for(int i=1; i<size; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(list[j]<list[j-1])

            {
                takas =list[j-1];
                list[j-1]=list[j];
                list[j]=takas;
            }
        }
    }
    //printing the elements of the list--------------------------------------------------
    printf("\nyour sorted list is as follow:\n");
    for( int i=1; i<=size; i++)
    {
        printf("%d\t",list[i-1]);
    }
    //printing some thing about the list:------------------------------------------------
    float sum=0;
    for(int i=0; i<size; i++)
        sum+=list[i];
    float median;
    if (size%2==0)
        median = ((list[size/2]+list[size/2-1])/2.0);
    else
        median = (list[size/2]);
    //standart deviation:
    float standard_deviation=0;
    for(int i=0; i<size; i++)
    {
        standard_deviation+=pow(list[i]-sum/size,2)/size;
    }
    standard_deviation= sqrt(standard_deviation);
    //mode:
    int mode=-1;
    int main_counter=1;
    for(int i=0; i<size; i++)
    {
        int counter=0;
        for(int j=0; j<size; j++)
        {
            if (list[i]==list[j])
                counter++;
        }
        if(counter>main_counter)
        {
            main_counter=counter;
            mode=list[i];
        }
    }
    //unique elements counter:
    int unique=0;
    int i,j;
    for (i=0; i<size; i++)
    {
        for (j=0; j<=i; j++)
        {
            if(list[i]!=list[j])
                continue;
            else
                break;
        }
        if (j==i)
            unique++;
    }

    printf("\nproperties:\n");
    printf("0: size: %d\n",size);
    printf("1: highest value: %d\n",list[size-1]);
    printf("2: lowest value: %d\n",list[0]);
    printf("3: average: %f\n",sum/size);
    printf("4: median is: %f\n",median);
    printf("5: standard deviation: %f\n", standard_deviation);
    printf("6: mode: %d\n",mode);
    printf("7: unique elements: %d\n",unique);

    return 0;

}
