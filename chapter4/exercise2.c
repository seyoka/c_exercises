#include <stdio.h>

int main()
{
    int hour, minute ; 
    printf("Please input a time in 24 hours (HH:MM): "); 
    scanf("%2d:%2d", &hour, &minute);

    if(hour < 12)
        printf("Time in 12-hour: %2d:%2d AM", hour, minute);
    else
        hour -= 12; 
        printf("Time in 12-hour: %2d:%2d PM", hour, minute); 
    return 0; 
}