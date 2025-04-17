#include <stdio.h>

int main() {
    int n = 5;
    int i = 0;

    // Outer loop for printing rows
    while (i < n) {
        int j = 0;

        // Inner loop for printing numbers in each row
        while (j <= i) {
            printf("%d ", i + 1);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
