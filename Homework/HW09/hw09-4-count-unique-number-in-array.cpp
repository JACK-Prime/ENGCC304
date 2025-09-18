/*  ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    Test case:
        Input N : 4
        Element[0] : 3
        Element[1] : 3
        Element[2] : 2
        Element[3] : 5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.

    Test case:
        Input N : 9
        Element[0] : 6
        Element[1] : 6
        Element[2] : 5
        Element[3] : 9
        Element[4] : 1
        Element[5] : 9
        Element[6] : 7
        Element[7] : 6
        Element[8] : 2
        
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/
#include <stdio.h>

int main () {
    int N = 0 ; 
    printf("Input N : ") ;
    scanf("%d" , &N ) ;

    int element[ N ] = {0} ;
    for (int i = 0 ; i < N ; i++ ) { 
        printf("Element[%d] : " , i ) ;
        scanf("%d" , &element[ i ] ) ;
    }

    printf("--------Result--------\n");

    for ( int  i = 0 ; i < N ; i++ ) { //เรียงน้อยไปมาก
        for ( int j = i + 1 ; j < N  ; j++ ) { //เริ่มนับช่องที่ 2
            if ( element[ i ] > element[ j ] ) {
                int holder = element[ i ] ; 
                element[ i ]  = element[ j ] ;
                element[ j ] = holder ;
            }
        }
    }

    for ( int i = 0 ; i < N ; i++ ) {
        int count = 1 ;
        for ( int j = 0 ; j < N ; j++ ) {
            if ( element[ i ] == element[ j ] && i != j ) count++ ; //check ทุกตัว
        }
        if ( element[ i ] == element[ i - 1 ] ) continue ; //skip 
        else printf("%d -> %d value%s.\n", element[ i ] , count , count > 1 ? "s" : "" ) ;
    }
    return 0 ;
}
