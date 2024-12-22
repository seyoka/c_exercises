#include <stdio.h> 

int main(){
    int start, middle, end ; 

    printf("Please enter a phone number in the form [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &start, &middle, &end); 

    printf("%3d.%3d.%4d", start, middle, end);
    
}