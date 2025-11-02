// Q75: Add two matrices

#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}

// Q76: Check if a matrix is symmetric

#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;
    scanf("%d", &n);
    int matrix[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < n && symmetric; i++)
        for(j = 0; j < n; j++)
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }

    if(symmetric) printf("Symmetric\n");
    else printf("Not symmetric\n");
    return 0;
}
