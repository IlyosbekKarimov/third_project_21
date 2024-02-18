#include <stdio.h>

int sum(int a, int b);
int difference(int a, int b);
int product(int a, int b);

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 0;
    }
    if (b != 0) {
        printf("%d %d %d %d", sum(a, b), difference(a, b), product(a, b), a / b);
    } else {
        printf("%d %d %d n/a", sum(a, b), difference(a, b), product(a, b));
    }

    return 0;
}

int sum(int a, int b) { return a + b; }
int difference(int a, int b) { return a - b; }
int product(int a, int b) { return a * b; }