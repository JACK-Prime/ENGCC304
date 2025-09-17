/*  ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N : 5
        Input : 1
        Input : 1
        Input : 2
        Input : 3
        Input : 3
    Output:
        Unique value : 2

    Test case:
        Input N : 6
        Input : 9
        Input : 9
        Input : 5
        Input : 6
        Input : 2
        Input : 1
    Output:
        Unique value : 1 2 5 6
*/
#include <stdio.h>

int main () {
    int N = 0 ; 
    printf("Input N : ") ;
    scanf("%d" , &N ) ;

    int input[ N ] = {0} ;
    for (int i = 0 ; i < N ; i++ ) { 
        printf("Input[%d] : " , i ) ;
        scanf("%d" , &input[ i ] ) ;
    }

    printf("--------Result--------\n");

    for ( int  i = 0 ; i < N ; i++ ) { //เรียงน้อยไปมาก
        for ( int j = i + 1 ; j < N  ; j++ ) { //เริ่มนับช่องที่ 2
            if ( input[ i ] > input[ j ] ) {
                int holder = input[ i ] ; 
                input[ i ]  = input[ j ] ;
                input[ j ] = holder ;
            }
        }
    }

    printf("\nUnique value : ") ;

    for ( int i = 0 ; i < N ; i++ ) {
        bool unique = true ;
        for ( int j = 0 ; j < N ; j++ ) {
            if ( input[ i ] == input[ j ] && i != j ) {
                unique = false ;
                break ;
            }
        }
        if ( unique ) {
            printf("%d ", input[ i ] ) ;
        }
    }
    return 0 ;
}