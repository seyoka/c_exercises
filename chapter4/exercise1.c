#include <stdio.h> 

int main()
{
    int d, digits; 
    printf("Please input a number to check: "); 
    scanf("%d", &d); 

    if(d < 10)
        digits = 1; 
    if(d >= 10 && d < 100)
        digits = 2; 
    if(d >= 100 && d < 1000)
        digits = 3; 
    if(d >= 1000 && d < 10000)
        digits = 4; 

    
    printf("\n\aThe number has %d digits", digits);
}