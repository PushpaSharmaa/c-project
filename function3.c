#include <stdio.h>
int main() {
    int n1, n2, max;
    n1 = 12;
    n2 = 30;

    printf("Input first number:%d\n",n1);
    printf("Input second number:%d\n",n2);

    max = (n1 > n2) ? n1 : n2; // maximum number between n1 and n2 is stored in max

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d = %d", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}