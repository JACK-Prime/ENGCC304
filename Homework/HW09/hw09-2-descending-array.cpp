/*ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1 */
#include <stdio.h>

int main () {
    int i = 0 , j = 0 ;
    int holder ;
    int N = 0 ;
    int array[100] = {} ; 

    while(true) {
        printf("Input : \n") ;
        scanf("%d", &array[ N ]) ;
        if ( array[ N ] == -1 || N >= 99 ) break ;
        N++ ;
    }

    printf("\n0-99 : ") ;
    for ( i = 0 ; i < N ; i++ ) { 
        for ( j = i + 1 ; j < N  ; j++ ) { //เริ่มนับช่องที่ 2
            if ( array[ i ] > array[ j ] ) {
                holder = array[ i ] ; 
                array[ i ] = array[ j ] ;
                array[ j ] = holder ;
            }//end if
        }//end for
    }//end for
    for ( j = 0 ; j < i ; j++ ) {
        printf("%d ", array[ j ] ) ;
    }//end for 

    printf("\n99-0 : ") ;
    for ( i = 0 ; i < N ; i++ ) { 
        for ( j = i + 1 ; j < N  ; j++ ) { //เริ่มนับช่องที่ 2
            if ( array[ i ] < array[ j ] ) {
                holder = array[ i ] ; 
                array[ i ] = array[ j ] ;
                array[ j ] = holder ;
            }//end if
        }//end for
    }//end for
    for ( j = 0 ; j < i ; j++ ) {
        printf("%d ", array[ j ] ) ;
    }//end for 

    return 0 ;
}