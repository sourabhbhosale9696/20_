//que 11
#include <stdio.h>

int productOfDigits(int n)
 { 
    int product = 1;
    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    return product;
}int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = productOfDigits(number);
    printf("Product of digits: %d\n", result);
    return 0;
}
