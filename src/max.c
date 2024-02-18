#include <stdio.h>

int maks(int a, int b);

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 0;
    }
    printf("%d", maks(a, b));
    return 0;
}

int maks(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}