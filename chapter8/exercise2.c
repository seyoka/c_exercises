#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    int digit_count[10] = {0};
    int digit;
    long n;
    const int LENGTH = sizeof(digit_count) / sizeof(digit_count[0]) ;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;

    }

    printf("Digit: \t");
    for(int i = 0; i < LENGTH; i++){
        printf(" %d", i);
    }

    printf("\nOccurences: ");
    for(int i = 0; i < LENGTH; i++){
        printf(" %d", digit_count[i]);
    }



    return 0;
}
