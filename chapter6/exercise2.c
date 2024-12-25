#include <stdio.h> 

int main()
{
    int a, b, remainder; 

    printf("Please enter two Integers: "); 
    scanf("%d, %d", &a, &b); 



    while(b != 0){
        remainder = a % b ; 

        a = b; 
        b = remainder ; 
    }

    printf("The GCD is: %d", a);
}