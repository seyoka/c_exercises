#include <stdio.h>
#include <stdlib.h>
typedef int Time ;

void find_closest_flight(int, int *, int *);
void time_helper(Time, int *, int *);

int main(){
    Time hours, minutes ;
    Time converted_time;
    Time depature, arrival;

    printf("Please enter a time to check in the format (HH:MM): ");
    scanf("%2d:%2d", &hours, &minutes);

    converted_time = hours * 60 + minutes ;

    find_closest_flight(converted_time, &depature,  &arrival);
}

void find_closest_flight(int desired_time, int *departure_time
    ,int *arrival_time){
        Time departure_times[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
        Time arrival_times[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
        int difference;
        int min_difference = 24*60 ;

        Time arrival_hour, arrival_minute, departure_hour, departure_minute ;

        for(int i = 0; i < 8; i++){
            difference = abs(desired_time - departure_times[i]);
            if(difference < min_difference){
                min_difference = difference;
                *departure_time = departure_times[i];
                *arrival_time = arrival_times[i];
            }
        }

        time_helper(*departure_time,  &departure_hour, &departure_minute);
        time_helper(*arrival_time, &arrival_hour, &arrival_minute);

        printf("Your departure time is %2d:%2d", departure_hour, departure_minute);
        printf("\nYour Arrival time is %2d:%2d", arrival_hour, arrival_minute);


}

void time_helper(Time time, Time *divisor, Time *adder){
    *divisor = time / 60 ;
    *adder = time % 60 ;
}
