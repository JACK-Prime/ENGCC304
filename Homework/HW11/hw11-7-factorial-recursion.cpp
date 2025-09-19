/*  เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนในรูปแบบของ Recursion Function)
    
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
#include <stdio.h>

int factorial(int);

int main () {
    int num = 0 ;  
    int fac = 0 ;

    printf("Enter number of factorial : ") ;
    scanf("%d" , &num ) ; 

    printf("%d! = " , num ) ;
    for ( int i = num ; i > 0  ; i-- ) {
        printf("%d " , i ) ;
        if ( i > 1 ) printf("x ") ;  
    }  
    fac = factorial( num ) ;
    printf("\n%d! = %d\n" , num ,fac  ) ;
}   

int factorial(int n ) { 
    if ( n == 0 ) return 1 ; //***0! = 1
    else return ( n * factorial( n - 1 ) ) ;    
}