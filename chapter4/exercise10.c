#include <stdio.h> 

int main()
{
    int grade; 

    printf("Input a grade: "); 
    scanf("%d", &grade); 

    if(grade > 100 || grade < 0 ){
        printf("\nGrade must be between 100 and 0"); 
        return 1; 
    }

    
    int eval = grade / 10 ; 


    switch (eval)
    {
    case 10:
        printf("\nGrade: A"); 
        break;
    case 9:
        printf("\nGrade: A");
        break;
    case 8:
        printf("\nGrade: B");
        break;
    case 7: 
        printf("\nGrade: C");
        break;
    case 6:
        printf("\nGrade: D");
        break;
    default:
        printf("\nGrade: F");
        break;
    }
}