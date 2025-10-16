#include <stdio.h>

int main(int argc, char** argv) {
    double arr[10];
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }
    for(int i = 9; i >= 0; i--) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    return 0; 
}