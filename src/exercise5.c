#include <stdio.h>

int main() {
    double A[10][3], B[3][10], C[10][10] = {0};
    int i, j, k;
    
    for(i = 0; i < 10; i++) for(j = 0; j < 3; j++) scanf("%lf", &A[i][j]);
    for(i = 0; i < 3; i++) for(j = 0; j < 10; j++) scanf("%lf", &B[i][j]);
    
    for(i = 0; i < 10; i++) 
        for(j = 0; j < 10; j++) 
            for(k = 0; k < 3; k++) 
                C[i][j] += A[i][k] * B[k][j];
    
    for(i = 0; i < 10; i++) for(j = 0; j < 10; j++) printf("%.2f ", C[i][j]);
    printf("\n");
    
    return 0;
}