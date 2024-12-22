#include <stdio.h> 

int main(){
    int GS1, group, pub, item, check ; 
    printf("Please enter an ISBN: "); 
    
    scanf("%3d-%d-%3d-%5d-%d", &GS1, &group, &pub, &item, &check);
    
    printf("GS1: %3d\nGroup: %d\nPub: %3d \nItem: %5d\nCheck digit: %d",
    GS1, 
    group, 
    pub, 
    item, 
    check); 

    return 0; 
}