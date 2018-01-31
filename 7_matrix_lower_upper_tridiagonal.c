#include <stdio.h>
int A[100][100], m, counter=0;

int insert_matrix() {
    printf("Enter dimension of (square) matrix: ");
    scanf("%d", &m);

    printf("\nEnter elements:\n");

    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d",&A[i][j]);
        }
    }
}

int is_upper_triangular() {
    for(int i=1; i<m; i++) {
        for(int j=0; j<i; j++) {
            if(A[i][j]!=0) {
                return 0;
            }
        }
    }
    return 1;
}

int is_lower_triangular() {
    for(int i=1; i<m; i++) {
        for(int j=i+1; j<m; j++) {
            if(A[i][j]!=0) {
                return 0;
            }
        }
    }
    return 1;
}

int is_tridiagonal() {
    if(!is_upper_triangular() && !is_lower_triangular()) {
        for (int i = 0; i < m; ++i)
        {
            if(A[i][i]!=0) return 0;
        }
        return 1;
    }
    return 0;
}

int main()
{
    insert_matrix();

    if(is_upper_triangular()) printf("Matrix is upper triangular\n");

    if(is_lower_triangular()) printf("Matrix is lower triangular\n");

    if(is_tridiagonal()) printf("Matrix is tridiagonal\n");
    return 0;
}
