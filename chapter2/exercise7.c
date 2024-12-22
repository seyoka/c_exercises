#include <stdio.h>

int main(){
    int twenty, ten, five, one, amount; 

    printf("Enter a Dollar Amount: "); 
    scanf("%d", &amount); 

    twenty = amount / 20 ; 
    amount = amount - (twenty * 20); 

    ten = amount / 10; 
    amount = amount - (ten * 10); 

    five = amount / 5; 
    amount = amount - (five * 5); 

    one = amount; 
    
    printf("$20 dollar bills: %d\n", twenty); 
    printf("$10 dollar bills: %d\n", ten ); 
    printf("$5 dollar bills: %d\n", five); 
    printf("$1 dollar bills: %d\n", one); 
}