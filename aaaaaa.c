#include <stdio.h>

// Recursive function to calculate factorial
long int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Factorial series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%ld ", factorial(i));
    }

    printf("\n");
    return 0;
}