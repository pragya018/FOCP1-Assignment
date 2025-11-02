#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swap 1: a=%d, b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap 2: a=%d, b=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Swap 3: a=%d, b=%d\n", a, b);
    int *p1 = &a, *p2 = &b, t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
    printf("After Swap 4: a=%d, b=%d\n", a, b);
    return 0;
}