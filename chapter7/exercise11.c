#include <stdio.h>


int main(){
    char firstName;
    char ch ;

    printf("Please enter a first and last name: ");
    scanf(" %c", &firstName);

    while((ch = getchar()) != ' '){
        ;
    }

    while((ch = getchar()) == ' '){
        ;
    }

    do{
        putchar(ch);
    }while((ch = getchar()) != '\n' && ch != ' ');

    printf(", %c", firstName);

}
