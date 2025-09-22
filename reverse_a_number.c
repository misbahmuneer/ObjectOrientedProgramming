//6. Reverse a Number
//Read an integer and print its reverse. Example: 123 → 321.
#include <stdio.h>
int main() {
    int a, mod = 0, reverse = 0, n1, n2;

    printf("Enter a number: ");
    scanf(" %n%d%n", &n1, &a, &n2);

    int width = n2 - n1;
    while (width-- > 0) {
        mod = a % 10;
        reverse = reverse * 10 + mod;
        a /= 10;
    }

    printf("%0*d\n", n2 - n1, reverse);
    return 0;
}
