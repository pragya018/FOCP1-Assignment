#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    int digits = 0, sum = 0, power, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;  
    while (originalNum != 0) {
        originalNum = originalNum / 10;
        digits++;
    }
    originalNum = num;  
    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = 1;

        for (i = 0; i < digits; i++) {
            power = power * remainder;
        }
        sum = sum + power;
        originalNum = originalNum / 10;
    }

    if (sum == num)
        printf("\n%d is an Armstrong number.\n", num);
    else
        printf("\n%d is not an Armstrong number.\n", num);

    return 0;
}
