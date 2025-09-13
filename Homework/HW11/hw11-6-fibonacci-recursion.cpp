/*  เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    (จงเขียนในรูปแบบของ Recursion Function)

    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54
*/
#include <stdio.h>
//0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
int fib(int) ;

int main () {
    int lenght = 0 ;
    int sum = 0 ;
    int fibonacci ;

    printf("Enter lenght of fibonacci : ") ;
    scanf("%d" , &lenght ) ; 

    printf("Series = ") ;

    for ( int i = 0 ; i < lenght ; i ++ ) {
        fibonacci = fib( i ) ;
        sum += fibonacci ;

        printf("%d " , fibonacci ) ;
        if ( i < lenght - 1 ) printf("+ ") ;
    }
    printf("\nsum = %d " , sum ) ;
    return 0 ; 
}//end function

int fib(int position ) { //Recursion Function
    if (position > 1 )return fib(position - 1) + fib(position - 2 ) ;
    else if ( position == 0 || position == 1 ) return 1 ; //skip 0 
    else {
        printf("Errors : position must be >= 0\n") ;
        return -1 ;
    }
} 