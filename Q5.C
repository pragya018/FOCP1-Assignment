#include <stdio.h>

int main() {
    float x, y;
    
    printf("Enter the coordinates (x, y): ");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the First Quadrant\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the Second Quadrant\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the Third Quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the Fourth Quadrant\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point lies at the Origin\n");
    else if (x == 0)
        printf("The point lies on the Y-axis\n");
    else
        printf("The point lies on the X-axis\n");

    return 0;
}
