#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];
    
    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0)
            even_array[evenCount++] = scores[i];
        else
            odd_array[oddCount++] = scores[i];
    }

    printf("Even scores: ");
    for (i = 0; i < evenCount; i++)
        printf("%d ", even_array[i]);

    printf("\nOdd scores: ");
    for (i = 0; i < oddCount; i++)
        printf("%d ", odd_array[i]);

    return 0;
}

