#include <stdio.h>

int main(){
    int i, n ;
    char ch ;
    printf("Please enter the number of rows in the table: ");
    scanf("%d", &n);
    getchar();

    for(int i = 1,  count = 1; i <= n ; i++){
        printf("%10d%10d\n", i, i*i );

        count++;

        // if( count % 24 == 0){
        //     printf("Please press enter to continue..");
        //     while((ch = getchar()) != '\n'){
        //     }
        // }
    }
    return 0;
}
