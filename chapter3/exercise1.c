#include <stdio.h> 

int main(void){
    int month, day, year ; 

    printf("Please enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);  

    printf("You entered the date: %2d/%2d/%4d", month, day, year); 
    return 0; 
}