#include <stdio.h> 

int main(){
    int item_num, day, month, year ; 
    float unit_price ; 

    printf("Enter a item number: "); 
    scanf("%d", &item_num); 

    printf("Enter a unit price: "); 
    scanf("%f", &unit_price); 
    
    printf("Enter the purchase date in (mm/dd/yyyy): "); 
    scanf("%2d/%2d/%4d", &month, &day, &year); 

    printf("Item number: %d\nUnit price: %.2f\nPurchase date:%2d/%2d/%4d", 
    item_num, 
    unit_price, 
    month, 
    day, 
    year);
}