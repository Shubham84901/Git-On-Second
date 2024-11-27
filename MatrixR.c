// C Code to rotate matrix 180 degree by swapping
// elements in-place

#include <stdio.h>

#define N 5
//int N;
//int mat[N][N];
// Function to rotate the matrix by 180 degrees
void rotateMatrix(int mat[N][N]) {
    // Swap elements from the start and end to
    // rotate by 180 degrees
    for (int i = 0; i < N/2; i++) {
        for (int j = 0; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[N - i - 1][N - j - 1];
            mat[N - i - 1][N - j - 1] = temp;
        }
    }
    // Handle the middle row if the matrix 
    // has odd dimensions
    if (N % 2 != 0) {
        int mid = N / 2;
        for (int j=0 ;j < N/2 ;j++) {
            int temp = mat[mid][j];
            mat[mid][j] = mat[mid][N - j - 1];
            mat[mid][N - j - 1] = temp;
        }
    }
    
}

int main() {
    int mat[N][N] = {
    {1, 2, 3,3,5},
    {4, 5, 6,4,5},
    {7, 8, 9,2,5},
    {1, 8, 2,6,5},
    {1, 8, 2,6,5},
    };
    rotateMatrix(mat);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
