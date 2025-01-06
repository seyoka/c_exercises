#include <stdio.h>

void pay_amount(int, int *, int *, int *, int *);

int main()
{
  int dollars, twenties, tens, fives, ones ;

  printf("Enter an amount in dollars: ");
  scanf("%d", &dollars);


  pay_amount(dollars, &twenties, &tens, &fives, &ones);

  printf("20s\t10s\t5s\t1s");
  printf("\n");
  printf("%d\t%d\t%d\t%d", twenties, tens, fives, ones);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20 ;
    dollars -= *twenties * 20;
    *tens = dollars / 10 ;
    printf("\n Dollars before tens and value of tens: %d, %d", dollars, *tens);
    dollars -= *tens * 10;
    printf("\nDollars after tens: %d", dollars);
    *fives = dollars / 5 ;
    dollars -= *fives * 5;
    printf("\nDollars after fives: %d", dollars);
    *ones = dollars / 1 ;
    printf("\nValue of 1s: %d ", *ones);
}
