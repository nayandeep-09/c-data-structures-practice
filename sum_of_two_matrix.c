// sum of two 3x3 matrices

#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 3, 6}, {7, 8, 9}};
    int b[3][3] = {{5, 8, 3}, {4, 5, 6}, {8, 8, 9}};
    int c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            if(c[i][j]<9){
                printf(" ");
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}