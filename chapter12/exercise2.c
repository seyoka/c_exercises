#include <ctype.h>
#include <stdio.h>
typedef int bool ;
#define TRUE 1
#define FALSE 0
#define N 100

bool check_palindrome(char [*], int );
bool is_letter(char ch);
void reverse_arr(char [*], int);

int main()
{
    char words[N], ch, *p;
    int len = 0;

    p = words;

    printf("Pleae enter a sentence: ");
    while(((ch = getchar()) != '\n')){
        if(is_letter(ch)){
            *p = tolower(ch);
            printf("\nDebug - is_letter: %c", *p);
            p++;
            len++;
        }
    }

    if(check_palindrome(words, len)){
        printf("\nPalindrome");
    }
    else{
        printf("\nNot a Palindrome");
    }
}


bool check_palindrome(char words[], int len){
    char *p, *q ;

    q = words ;

    for(p = words + len - 1; p>= words; p--){
        if(*p != *q){
            printf("\nDebug - check_palindrome: p - %c , q - %c", *p, *q);
            return FALSE;
        }
        printf("\nDebug - Reversed Array: %c", *p);
        q++;
    }

    return TRUE;

}

bool is_letter(char ch){
    if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z')){
        return TRUE;
    }
    return FALSE;
}

void reverse_arr(char words[], int len){
    char *p ;

    printf("\nSentence reversed: ");
    for(p = words + len - 1; p >=words; p-- ){
        printf("%c", *p);
    }
}
