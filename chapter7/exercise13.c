#include <stdio.h>

int main()
{
    double averageWord ;
    double len , word;
    len = 0 ;
    char ch ;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n' ){
        len++;

        if(ch == ' '){
            word++ ;
            len  -= 1 ;
        }
    }


    averageWord = len / word ;
    printf("Characters: %f\nWords: %f", len, word);
    printf("\nAverage word count: %f", averageWord);
}
