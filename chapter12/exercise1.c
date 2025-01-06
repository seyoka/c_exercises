#include <stdio.h>
#define N 100
void reverse_arr(char [*], int);

int main()
{
    char words[N], *p, ch;
    int chars = 0 ;

    p = words;
    printf("Please enter a sentence: ");
    while((ch = getchar()) != '\n'){
        *p = ch ;
        p++;
        chars++;
    }

    reverse_arr(words, chars);
}

void reverse_arr(char words[], int len){
    char *p ;

    printf("\nSentence reversed: ");
    for(p = words + len - 1; p >=words; p-- ){
        printf("%c", *p);
    }
}
