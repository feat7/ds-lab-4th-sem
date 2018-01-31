#include <stdio.h>
int A[100][100], m, n, counter=0;

int insert_matrix() {
    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &m, &n);

    printf("\nEnter elements:\n");

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&A[i][j]);
        }
    }
}

int is_sparse() {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(A[i][j]==0) counter++;
        }
    }
    
    if(counter>(m*n/2)) printf("\nMatrix is sparse\n");
    else printf("\nMatrix is not sparse\n");
}

int tuple_matrix() {
    int element = m*n-counter;
    printf("\nRows\tColumn\tValue\n");
    printf("%d\t%d\t%d\t\n", m, n, element);
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(A[i][j]!=0) printf("%d\t%d\t%d\t\n", i+1, j+1, A[i][j]); 
        }
    }
}

int transpose_matrix() {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            A[i][j] = A[j][i];
        }
    }
}

int main()
{
    insert_matrix();
    
    is_sparse();
    
    tuple_matrix();
    return 0;
}
