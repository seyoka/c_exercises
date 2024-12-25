#include <stdio.h> 

int main()
{
    int n, count, num; 
    num = 1; 

    printf("Please input the number to find the even squares between 1 amd N: "); 
    scanf("%d", &n); 

    while(count < n){
        if((num*num) % 2 == 0){
            printf("\n%d", num*num);
        }

        num++;
        count++; 

        if(num*num > n){
            break;
        }
    }
}