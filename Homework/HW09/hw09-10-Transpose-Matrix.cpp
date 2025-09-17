/*
    ผู้ใช้กรอกจำนวนที่ต้องการในอาเรย์ 2 มิติ พร้อมกับกรอกค่าลงไปในอาเรย์จนครบทุกค่า จากนั้นให้คุณทำการ Transpose ค่าในอาเรย์และแสดงผลบนหน้าจอ
    
    Test case:
        Array element : 
            2 3 
        Input :
            9 8 7 
            6 5 5
    Output:
        Array
            9 8 7
            6 5 5
        Array Transpose
            9 6
            8 5
            7 5 */
#include <stdio.h>

int main () {
    int row, col, i, j;

    printf("Array element : \n") ; 
    scanf("%d %d", &row , &col) ;

    int array[ row ][ col ], transpose[ col ][ row ] ;

    printf("Input :\n");
    for( i = 0 ; i < row ; i++ ) {
        for( j = 0 ; j < col ; j++ )  {
            scanf("%d", &array[ i ][ j ] ) ;
        }
    }
    // output
    printf("Array\n");
    for( i = 0 ; i < row ; i++ ) {
        for( j = 0 ; j < col ; j++ ) {
            printf("%d " , array[ i ][ j ] ) ;
        }
        printf("\n") ;
    }
    //Transpose
    for( i = 0 ; i < row ; i++ ) {
        for( j = 0 ; j < col ; j++ )  {
            transpose[ j ][ i ] = array[ i ][ j ] ;
        }
    }
    //show transpose
    printf("Array Transpose\n");
    for ( i = 0 ; i < col ; i++ ) {
        for ( j = 0 ; j < row ; j++ ) {
            printf("%d ", transpose[ i ][ j ]);
        }
        printf("\n") ;
    }

    return 0;
}