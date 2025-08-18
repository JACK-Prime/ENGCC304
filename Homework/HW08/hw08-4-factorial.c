/*เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 40320
*/
#include<stdio.h>

int main () {
    int fact = 0 , ans = 1 ;
    int i = 0 , j = 0 ; 
    
    printf("Input factoriral : ") ;
    scanf("%d" ,&fact) ;

    printf("%d! = ",fact) ;
    i = fact ;

    while (i > 0) {
        printf("%d ",i) ;
        ans *= i ;
        j = i ;
        while (j - 1 > 0 ) {
            printf("x ");
            j-- ;
            break;
        }
        i-- ;
    }
    printf("\n%d! = %d",fact , ans) ;
}