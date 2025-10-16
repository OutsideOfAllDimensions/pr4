#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int k = atoi(argv[1]);
    double arr[10];
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        int chislo = (i - k + 100) % 10;
        printf("%.2f ", arr[chislo]);    
    
    }
    return 0;
}