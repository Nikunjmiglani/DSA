#include <stdio.h>
#include <stdlib.h>

void readMatrix(int **matrix, int rows, int cols)
{
    printf("enter elements of the matrix (%d x %d:", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("element[%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix, int rows, int cols)
{
    printf("matrix (%d x %d)", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", matrix[i][j]);
        }
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;
    printf("enter the number of rows and columns for matrix1:");
    scanf("%d%d", &rows1, &cols1);
    printf("enter the number of rows and columns for matrix2:");
    scanf("%d%d", &rows2, &cols2);

    if (cols1 != rows2)
    {
        printf("unable to perform the action");
        return -1;
    }

    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    int **result = (int **)malloc(rows1 * sizeof(int *));

    for (int i = 0; i < rows1; i++)
    {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int *));

        result[i] = (int *)malloc(cols2 * sizeof(int *));
    }
    for (int i = 0; i < rows2; i++)
    {
        

        matrix2[i] = (int *)malloc(cols2 * sizeof(int *));
        
    }
    readMatrix(matrix1, rows1, cols1);
    readMatrix(matrix2, rows2, cols2);

    printMatrix(matrix1, rows1,cols1);
    printMatrix(matrix2, rows2, cols2);


    for(int i =0; i<rows1;i++){
        for (int j =0;j<rows2;j++){
            result[i][j]=0;
        }
    }

    for (int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            for(int k =0;k<cols1;k++){
                result[i][j] = matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("resultant matrix");
    printMatrix(result, rows1, cols2);

    for(int i=0;i<rows1;i++){
        free(matrix1[i]);
        free(result[i]);
    }
    for(int i=0;i<rows2;i++){
        free(matrix2[i]);
    }


}