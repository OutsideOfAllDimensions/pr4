#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double x = atof(argv[1]);
    int k = atoi(argv[2]);
    double arr[10];
    double res[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }
    
    for(int i = 0; i < k; i++) {
        res[i] = arr[i];
    }
    
    res[k] = x;
    
    for(int i = k + 1; i < 10; i++) {
        res[i] = arr[i - 1];
    }
    
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", res[i]);
    }
    printf("\n");
    
    return 0;
}