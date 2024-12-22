#include <stdio.h>

int main()
{
    int m0n0, m0n1, m0n2, m0n3, 
        m1n0, m1n1, m1n2, m1n3,
        m2n0, m2n1, m2n2, m2n3,
        m3n0, m3n1, m3n2, m3n3 ; 

    printf("Please enter any numbers between 1 and 16: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
    &m0n0, &m0n1, &m0n2, &m0n3,
    &m1n0, &m1n1, &m1n2, &m1n3,
    &m2n0, &m2n1, &m2n2, &m2n3, 
    &m3n0, &m3n1, &m3n2, &m3n3
    );

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", 
    m0n0, m0n1, m0n2, m0n3,
    m1n0, m1n1, m1n2, m1n3,
    m2n0, m2n1, m2n2, m2n3, 
    m3n0, m3n1, m3n2, m3n3
    );

    int row_sumsM0 =  m0n0 + m0n1 +  m0n2 + m0n3 ; 
    int row_sumsM1 = m1n0 + m1n1 + m1n2 + m1n3 ;
    int row_sumsM2 = m2n0 + m2n1 + m2n2 + m2n3 ; 
    int row_sumsM3 =  m3n0 + m3n1 + m3n2 + m3n3 ;

    int col_sumsM0 = m0n0 + m1n0 + m2n0 + m3n0;
    int col_sumsM1 = m0n1 + m1n1 + m2n1 + m3n1;
    int col_sumsM2 = m0n2 + m1n2 + m2n2 + m3n2;
    int col_sumsM3 = m0n3 + m1n3 + m2n3 + m3n3;

    int diagonal_sums = m0n0 + m1n1 + m2n2 + m3n3 ; 
    int diagonal_sum2 = m0n3 + m1n2 + m2n1 + m3n0;

    printf("Row Sums: %d, %d, %d, %d\n", row_sumsM0, row_sumsM1, row_sumsM2, row_sumsM3);
    printf("Column Sums: %d, %d, %d, %d\n", col_sumsM0, col_sumsM1, col_sumsM2, col_sumsM3);
    printf("Diagonal Sums: %d, %d", diagonal_sums, diagonal_sum2); 
}