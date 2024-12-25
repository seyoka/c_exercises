#include <stdio.h> 

int main(){
    int num, prevNum; 
    int count = 0 ; 


    while(count < 5){

        prevNum = num ; 

        printf("Please enter a number: ");
        scanf("%d", &num); 

        if(prevNum > num){
            num = prevNum ; 
        }

        count++; 
    }

    printf("The largest entered is: %d", num); 
    return 0; 
}