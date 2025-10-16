#include <stdio.h>

int main(int argc, char** argv) {
    double arr[10];
    double sum = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    double sr = sum / 10;

    printf("%.2f", sr);
    return 0;
}