/* รับค่า Array จากผู้ใช้มา 2 ค่า และเติมค่าในอาเรย์ให้เต็มทั้ง 2 ค่า นั้นนั้นทำ Array1 มาคูณกับ Array2 แบบ Matrix (คุณสามารถหาข้อมูลการคูณ Matrix เพิ่มเติมได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=Gocc4CriZdA)
    Test case:
        Array1 Value : 
            2 5
        Array1 element :
            2 5 3 8 3
            2 5 3 1 1
        Array2 Value : 
            5 2
        Array2 element :
            2 3
            4 4
            1 2
            1 1
            2 3
    Output:
        Array1
            2 5 3 8 3
            2 5 3 1 1
        Array2
            2 3
            4 4
            1 2
            1 1
            2 3
        Array1 x Array2
            41 49
            30 36
*/
#include <stdio.h>
//the frist columns of Matrix must equal the second rows of Matrix --->  M1[][equal] x M2[equal][] 
int main () {
    int row1  , col1 , row2 , col2 , i, j ;
    //input 1
    printf("Array1 Value : \n") ; 
    scanf("%d %d", &row1 , &col1) ;

    int matrix1[ row1 ][ col1 ] ;

    printf("Array1 element :\n") ;
    for( i = 0 ; i < row1 ; i++ ) {
        for( j = 0 ; j < col1 ; j++ )  {
            scanf("%d", &matrix1[ i ][ j ] ) ;
        }
    }
    //input2
    printf("Array2 Value : \n") ; 
    scanf("%d %d", &row2 , &col2) ;

    int matrix2[ row2 ][ col2 ] ;

    printf("Array2 element :\n") ;
    for( i = 0 ; i < row2 ; i++ ) {
        for( j = 0 ; j < col2 ; j++ )  {
            scanf("%d", &matrix2[ i ][ j ] ) ;
        }
    }
    //output 1
    printf("\nArray1\n");
    for( i = 0 ; i < row1 ; i++ ) {
        for( j = 0 ; j < col1 ; j++ ) {
            printf("%d " , matrix1[ i ][ j ] ) ;
        }
        printf("\n") ;
    }
    //output 2
    printf("Array2\n");
    for( i = 0 ; i < row2 ; i++ ) {
        for( j = 0 ; j < col2 ; j++ ) {
            printf("%d " , matrix2[ i ][ j ] ) ;
        }
        printf("\n") ;
    }
    //cal 
    printf("AArray1 x Array2\n") ; 
    int multiply[ row1 ][ col2 ] ;
    int sum = 0 ;
    for ( i = 0 ; i < row1 ; i++ ) {
        for ( j = 0 ; j < col2 ; j++ ) {   
            sum = 0 ; 
            for (int m = 0 ; m < row2 ; m++ ) {
                sum += matrix1[ i ][ m ] * matrix2[ m ][ j  ] ;
            }
            multiply[ i ][ j ] = sum ;
        }
    }
    //show multiply 
    for( i = 0 ; i < row1 ; i++ ) {
        for( j = 0 ; j < col2 ; j++ ) {
            printf("%d " , multiply[ i ][ j ] ) ;
        }
        printf("\n") ;
    }
    return 0 ; 
}