#include <stdio.h>
int main() {
    float a, b;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    // Swapping

    // a = (initial_a - initial_b)
    a = a - b;   
 
    // b = (initial_a - initial_b) + initial_b = initial_a
    b = a + b;

    // a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;

    printf("After swapping, a = %f\n", a);
    printf("After swapping, b = %f", b);
    return 0;
}