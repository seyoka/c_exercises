#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int c_i = 0, c_j = 0;
    int prev_c_i, prev_c_j;
    int direction;
    char map[10][10];
    const char alpha[25] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                            'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


    int LENGTH = sizeof(map) / sizeof(map[0][0]);
    srand((unsigned) time(NULL));

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            map[i][j] = '.';
        }
    }

    map[c_i][c_j] = 'A';

    for(int i = 0 ; i <= 25; i++){
        direction = rand() % 4 ;

        if(direction == 0){
            prev_c_i = c_i;
            c_i++;
            if((c_i < 0 || c_i > 10) || map[c_i][c_j] != '.'){
                i--;
                c_i = prev_c_i;
            }
            else {
                map[c_i][c_j] = alpha[i];
            }
        }

        if(direction == 1){
            prev_c_i = c_i;
            c_i--;

            if((c_i < 0 || c_i > 10) || map[c_i][c_j] != '.'){
                i--;
                c_i = prev_c_i;
            }
            else {
                map[c_i][c_j] = alpha[i];
            }
        }

        if(direction == 2){
            prev_c_j = c_j ;
            c_j++;
            if((c_j < 0 || c_j > 10) || map[c_i][c_j] != '.'){
                i--;
                c_j = prev_c_j;
            }
            else {
                map[c_i][c_j] = alpha[i];
            }
        }

        if(direction == 3){
            prev_c_j = c_j;
            c_j--;
            if((c_j < 0 || c_j > 10) || map[c_i][c_j] != '.'){
                i--;
                c_j = prev_c_j;
            }
            else {
                map[c_i][c_j] = alpha[i];
            }
        }
    }

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0; j < 10; j++){
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
}
