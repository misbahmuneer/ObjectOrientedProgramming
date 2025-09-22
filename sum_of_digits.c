//7. Sum of Digits
//Input a number and calculate the sum of its digits. Example: 123 → 6.
#include <stdio.h>
int main(void) {
    int num, sum = 0, rem;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int n = num < 0 ? -num : num; 
    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}
