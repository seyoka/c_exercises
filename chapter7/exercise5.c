#include <stdio.h>
#include <ctype.h>

int main(){
   char ch ;
   int scrabbleScore;

   printf("Please enter a word to check: ");
    while((ch = getchar()) != '\n'){
        switch(toupper(ch)){
            case 'D': case 'G':
                scrabbleScore += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                scrabbleScore += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                scrabbleScore += 4;
                break;
            case 'K':
                scrabbleScore += 5 ;
                break;
            case 'J': case 'X':
                scrabbleScore += 8 ;
                break;
            case 'Q': case 'Z':
                scrabbleScore += 10;
                break;
            default:
                scrabbleScore += 1 ;
                break;
        }
    }
    printf("\nScrabble score: %d", scrabbleScore);

}
