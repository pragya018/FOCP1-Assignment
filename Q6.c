#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        int decimal = 0, base = 1, rem;

        printf("Enter a binary number: ");
        scanf("%lld", &binary);

        while (binary > 0) {
            rem = binary % 10;
            decimal += rem * base;
            base *= 2;
            binary /= 10;
        }
        printf("Decimal equivalent: %d\n", decimal);
        }
    else if (choice == 2) {
        int decimal, i = 0, binary[32];
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal /= 2;
            i++;
        }

        printf("Binary equivalent: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", binary[j]);
        printf("\n");
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}