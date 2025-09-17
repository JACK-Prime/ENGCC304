/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย
    Test case:
        Enter element of Array1 : 4
        --| Array1 [0] : 9
        --| Array1 [1] : 7
        --| Array1 [2] : 6
        --| Array1 [3] : 3
        Enter element of Array2 :5
        --| Array2 [0] : 2
        --| Array2 [1] : 3
        --| Array2 [2] : 5
        --| Array2 [3] : 8
        --| Array2 [4] : 9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2
*/
#include <stdio.h>

int main () {
    int n1 = 0 , n2 = 0 , i = 0 , j = 0 ;
    int hold ;
    //array 1
    printf("Enter element of Array1 : ") ;
    scanf("%d" , &n1 ) ;
    int array_1[ n1 ] ; 
    for ( i = 0 ; i < n1 ; i ++ ) {
        printf("--| Array1 [%d] : " , i ) ;
        scanf("%d" , &array_1[ i ] ) ;
    }
    //array 2
    printf("Enter element of Array2 : ") ;
    scanf("%d" , &n2 ) ;
    int array_2[ n2 ] ; 
    for ( i = 0 ; i < n2 ; i ++ ) {
        printf("--| Array2 [%d] : " , i ) ;
        scanf("%d" , &array_2[ i ] ) ;
    }
    //merge  
    int array_3[150] ; 
    for ( i = 0 ; i < n1 ; i++ ) {
        array_3[ i ] = array_1[ i ] ; 
    }

    for ( j = 0 ; j < n2 ; j++ ) {
        array_3[ i + j ] = array_2[ j ] ;
    } 
    //result 
    printf("\n") ; 
    printf("Merge Array1 & Array2 to Array3\n") ;
    printf("Array3 = ") ;
    //sort
    for ( i = 0 ; i < ( n1 + n2 ) ; i++ ) {
        for ( j = i + 1 ; j < (n1 + n2 ) ; j++ ) {
            if ( array_3[ i ] < array_3 [ j ] ) {
                hold = array_3[ i ] ;
                array_3[ i ] = array_3[ j ] ;
                array_3[ j ] = hold ;
            } 
        }
    }
    //display
    for ( i = 0 ; i < ( n1 + n2 ) ; i++ ) {
        printf("%d " , array_3[ i ] ) ; 
    }
}