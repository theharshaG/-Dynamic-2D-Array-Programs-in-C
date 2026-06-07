#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows = 3;
    int cols = 4;

    int **arr;

    arr = (int**)malloc(rows * sizeof(int*));

    for(int i=0; i<rows; i++)
    {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}
