#include <stdio.h>
#include <stdlib.h>


void matris_multiplication(int ai, int aj,
                           int A[ai][aj],
                           int bi, int bj,
                           int B[bi][bj],
                           int C[ai][bj])
{
    if (aj!=bi)
    {
        printf("Matrix dimensions do not match!\n");
        return;
    }
    for(int i=0; i<ai; i++)
    {
        for(int j=0; j<bj; j++)
        {
            C[i][j]=0;
            for(int k=0; k<aj; k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    }

}
int main()
{
    int ai,aj,bi,bj;
    ai= 3;
    aj= 3;
    bi= 3;
    bj= 3;
    int A[3][3]= {{2,3,4},{6,5,4},{1,2,5}};
    int B[3][3]= {{7,9,0},{3,7,4},{2,7,4}};
    int C[3][3];
    matris_multiplication(ai, aj, A, bi, bj, B, C);
    for(int i=0; i<ai; i++)
    {
        for(int j=0; j<bj; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
