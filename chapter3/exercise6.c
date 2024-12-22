#include <stdio.h> 

int main()
{
    int numerator1, numerator2, denominator1, denominator2 ; 

    printf("Please enter two fractions to add in the form\n(A/B + C/D): ");
    scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2, &denominator2); 

    int ans_numerator = numerator1 * denominator2 + numerator2 * denominator2 ;
    int ans_denominator = denominator1 * denominator2 ; 

    printf("The answer is: %d/%d", ans_numerator, ans_denominator); 
}