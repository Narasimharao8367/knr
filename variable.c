#include <stdio.h>

int main() {
    // Declare variables of different types
    int x;
    char c;
    float f;
    double d;

    // Get user input for each variable
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter a character: ");
    scanf(" %c", &c);  // Notice the space before %c to consume any leftover newline character
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &d);

    // Conditional comparisons and outputs
    if (x > 1) {
        printf("Integer variable is greater than 1.\n");
    } else {
        printf("Integer variable is not greater than 1.\n");
    }

    if (c != 'a') {
        printf("Character variable does not equal the letter a.\n");
    } else {
        printf("Character variable equals the letter a.\n");
    }

    if (f < 0.0) {
        printf("Float variable is less than 0.\n");
    } else {
        printf("Float variable is not less than 0.\n");
    }

    if (d == 3.14) {
        printf("Double variable equals 3.14.\n");
    } else {
        printf("Double variable does not equal 3.14.\n");
    }

    return 0;
}

