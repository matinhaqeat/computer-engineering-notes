#include <stdio.h>

int main()
{
    int scores[]={1,53,764,234,-758,0,34,23,45};
    int length= sizeof(scores)/sizeof(scores[1]);
    int max= scores[0];
    int smax= scores[1];
    int temp;
    if (max<smax)
    {
        temp= max;
        max=smax;
        smax=temp;
    }
    for(int i=2; i<length; i++)
    {
        if (scores[i]>smax)
        {
            if (scores[i]>max)
            {
                smax=max;
                max=scores[i];
            }
            else
                smax= scores[i];

        }
    }
    printf("the firstt max is: %d", max);
    printf("the second max is: %d",smax);

}
