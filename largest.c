#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("Largest is: %d", a);
        } else {
            printf("Largest is: %d", c);
        }
    } else {
        if (b > c) {
            printf("Largest is: %d", b);
        } else {
            printf("Largest is: %d", c);
        }
    }

    return 0;
}