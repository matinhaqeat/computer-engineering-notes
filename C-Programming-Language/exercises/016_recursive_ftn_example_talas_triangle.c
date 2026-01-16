#include <stdio.h>


int binomail(int row, int column)
{
    if(column==0 || column ==row)
        return 1;
    return binomail(row-1,column-1) + binomail (row-1,column);
}


void print_row(int row)
{
    printf("row %d==>[",row);
    for(int i=0; i<row; i++)
    {
        printf("%d",binomail(row,i));
        printf((i+1<row)?", ":"]\n");
    }
}


int main()
{
    int row=1;
    while(row<=7)
        print_row(row++);
}
