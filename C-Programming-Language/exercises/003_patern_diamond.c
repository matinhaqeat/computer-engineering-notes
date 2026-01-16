#include <stdio.h>
#include <stdlib.h>
int main()
{
    int height;
    printf("***diamond patern*** \n");
    printf("enter the height u want: \n");
    scanf("%d",&height);
    if (height<0)
        height=0;
    if (height!=0 && height%2==0)
        {height+=1;printf("for height=%d:\n\n",height);}

    for(int i=0; i<height; i++)
    {
        int gld= abs(((height-1)/2)-i);
        for(int space=0; space<gld;space++)
        {
            printf(" ");
        }
        int gold=(height-1)-2*gld+1;
        for (int j=0; j<gold; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
    printf("stars used: %d", (height*height+1)/2);
}
