// Simple matrix
//2-D Array

//Simple matrix insertion with input and printing matrix.

#include <stdio.h>

int main(){
    int arr[2][3];
    printf("Enter the elements of matrix: ");
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
     }


         printf("matrix is:\n");

     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
     }
     
    return 0;
}

// Simple matrix multuplication.

#include <stdio.h>

int main(){
    int a[2][3] = {{2,3,4},{5,6,7}};
    int b[2][3] = {{1,2,3},{4,5,6}};
    int c[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

// little rought multiplication with [2][3]*[3][2]

#include <stdio.h>

int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2] = {{1,4},{2,5},{3,6}};
    int c[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j]=  c[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

// little hard multiplication with [3][3]*[3][3]

#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
