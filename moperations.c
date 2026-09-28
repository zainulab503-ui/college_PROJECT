#include<stdio.h>
void display(int rows, int cols, int matrix[rows][cols]);
void addmatrix(int rows,int cols, int matrix1[rows][cols],int matrix2[rows][cols]);
void transpose(int rows, int cols, int matrix[rows][cols]);
void multiplymatrix(int rows,int cols1, int rows2, int matrix1[rows][cols1],int matrix2[rows2][rows]);
int main() {
    int i, j, rows, cols,r2,c2;
    printf("enter number of rows");
    scanf("%d", &rows);
    printf("enter number of columns");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("\nenter elements");
    for (i = 0;i < rows;i++) {
        for (j = 0;j < cols;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nmatrix 1:");
    display(rows, cols, matrix);
    printf("enter number of rows of matrix 2");
    scanf("%d", &r2);
    printf("enter number of columns of matrix 2");
    scanf("%d", &c2);
    int matrix2[r2][c2];
    printf("\nenter elements of matrix 2:");
    for (i = 0;i < rows;i++) {
        for (j = 0;j < cols;j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nmatrix 2:");
    display(r2,c2,matrix2);
    addmatrix(rows,cols,matrix,matrix2);
    transpose(rows,cols,matrix);
    multiplymatrix(rows,cols,r2,c2,matrix1,matrix2);
    return 0;
}
void display(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("\nentered matrix");
    for (i = 0;i < rows;i++) {
        printf("\n");
        for (j = 0;j < cols;j++) {
            printf("%d\t", matrix[i][j]);
        }
    }

}
void addmatrix(int rows,int cols, int matrix1[rows][cols],int matrix2[rows][cols]){
    int i,j;
    printf("\nsum of matrix");
    for(i=0;i<rows;i++){

        printf("\n");
        for(j=0;j<cols;j++){
            printf("%d\t", matrix1[i][j] + matrix2[i][j]);
        }
    }
}
void transpose(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("\nTranspose of matrix");
    for (i = 0;i < rows;i++) {
        printf("\n");
        for (j = 0;j < cols;j++) {
            printf("%d\t", matrix[j][i]);
        }
    }
}
void multiplymatrix(int rows,int cols1, int rows2, int matrix1[rows][cols1],int matrix2[rows2][rows]){
    int i,j,k;
    int result[rows][rows2];
    printf("\nproduct of matrix");
    for(i=0;i<rows;i++){

        printf("\n");
        for(j=0;j<rows;j++){
            for (k=0;k<cols1;k++){
                result[i][j]=cols1, result[i][j]+ matrix1[i][j]*matrix2[k][j];
            }
            printf("%d\t", matrix1[i][j] + matrix2[i][j]); 
        }
    }
}