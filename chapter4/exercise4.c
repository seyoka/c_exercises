#include <stdio.h> 

int main()
{
    int wind_speed; 

    printf("Please input a wind speed: "); 
    scanf("%d", &wind_speed); 

    if(wind_speed < 1 )
        printf("Calm"); 
    else if (wind_speed >= 1 && wind_speed <= 3)
    {
        printf("light"); 
    }
    else if (wind_speed >= 4 && wind_speed <= 27)
    {
        printf("Breeze");
    }
    else if (wind_speed >= 28 && wind_speed <= 47)
    {
        printf("Gale");
    }
    else if (wind_speed >= 48 && wind_speed <= 63)
    {
        printf("Storm");
    }
    
}