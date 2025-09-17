/*  ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน
    Test case:
        Array1 element : 3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element : 3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10
*/
#include <stdio.h>

int main () {
    int col , row , i , j ;
    //Array1
    printf("Array1 element : ") ;
    scanf("%d %d", &col , &row) ;
    int array1[ row ][ col ] , array2[ row ][ col ] , array3[ row ][ col ] ;
    //input Array1
    printf("Input :\n") ;
    for ( i = 0 ; i < row ; i++ ) { //x
        for ( j = 0 ; j < col ; j++ ) { //y
            scanf("%d", &array1[ i ][ j ] , &array1[ i + 1 ][ j + 1 ] , &array1[ i + 2 ][ j + 2 ] ) ;
        }
    }
    //Array2
    printf("Array2 element : %d %d" , row , col ) ;
    //input Array2
    printf("Input :\n") ;
    for ( i = 0 ; i < row ; i++ ) { //x
        for ( j = 0 ; j < col ; j++ ) { //y
            scanf("%d", &array2[ i ][ j ] , &array2[ i + 1 ][ j + 1 ] , &array2[ i + 2 ][ j + 2 ] ) ;
        }
    }
    //cal sum
    printf("\nArray1 + Array2 = Array3\n");
    for ( i = 0 ; i < row ; i++ ) {
        for ( j = 0 ; j < col ; j++) {
            array3[ i ][ j ] =  array1[ i ][ j ] +  array2[ i ][ j ] ;
        }
    }
    //display
    for ( i = 0 ; i < row ; i++ ) {
        for ( j = 0 ; j < col ; j++) {
            printf("%d " ,array3[ i ][ j ] ) ;
        }
        printf("\n") ;
    }

    return 0 ; 
}