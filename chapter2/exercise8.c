#include <stdio.h> 

int main(){
    float amount_of_loan, i, monthly, balance ; 

    printf("Enter amount of Loan: "); 
    scanf("%f", &amount_of_loan); 

    printf("Enter interest rate: "); 
    scanf("%f", &i); 

    printf("Enter monthly payment amount: "); 
    scanf("%f", &monthly); 

    float monthly_interest_rate = (i * 1/100) / 12 ; 

    balance = (amount_of_loan * monthly_interest_rate + amount_of_loan ) - monthly ; 
    printf("\nFirst Payment: %.2f", balance); 

    balance = (balance * monthly_interest_rate + balance) - monthly ; 
    printf("\nSecond Payment: %.2f", balance); 

    balance = (balance * monthly_interest_rate + balance) - monthly ; 
    printf("\nThird Payment: %.2f", balance); 



}