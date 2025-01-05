#include <ctype.h>
#include <stdio.h>

int main()
{
    int char_length;
    char chars[70] = {'a'};
    char ch ;
    int count = 0;

    int LENGHT = sizeof(chars) / sizeof(chars[0]);

   printf("Please enter a message to translate: ");

   while(ch != '\n' && count < LENGHT){
       chars[count] = ch ;
       count++;
       ch = getchar();
   }
   for(int i = 0 ; i < LENGHT; i++){
       switch(toupper(chars[i])){
        case 'E':
            chars[i] = '3';
            break;
        case 'B':
            chars[i] = '8';
            break;
        case 'A':
            chars[i] = '4';
            break;
        case 'I':
            chars[i] = '1';
            break;
        case 'O':
            chars[i] = '0';
            break;
        case'S':
            chars[i] = '5';
            break;
        default:
            chars[i] = toupper(chars[i]);
       }
   }



   for(int i = 0, j = count; i <= 10; i++, j++){
       chars[j] = '!';
   }

   printf("Translated Message: ");
   for(int i = 0; i < LENGHT; i++ ){
       printf("%c", chars[i]);
   }

}
