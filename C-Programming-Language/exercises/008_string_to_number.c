#include <stdio.h>
#include <string.h>

int main()
{
    //digits summation:
    char number[] = {"12222222222234567854321"};
    int sum=0;
    int l= strlen(number);
    for(int i=0;i<l;i++)
    {
        int k = number[i]-'0';
        sum+=k;
    }

    //atoi ftn: handmade:
    char score[]="12345";
    int score_intiger=0;
    for(int i=0; score[i]!='\0';i++)
    {
        score_intiger=score_intiger*10+score[i]-'0';
    }
    printf("%d",score_intiger);
}
