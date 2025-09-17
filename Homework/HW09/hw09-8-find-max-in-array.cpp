/*  ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    Test case:
        Enter new element of Array : 5
        Input : 5
        Input : 3
        Input : 2
        Input : 1
        Input : 9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3
*/
#include <stdio.h>

int main () {
    int i , j , N ,hold ; 
    printf("Enter new element of Array : ") ;
    scanf("%d" , &N ) ;

    int array[ N ] ;
    for ( i = 0 ; i < N ; i++ ) {
        printf("Input : ") ;
        scanf("%d" , &array[ i ] ) ; 
    }
    //show -1
    printf("\nArray : ") ;
    for ( i = 0 ; i < N ; i++  ){
        printf("%d ",array[ i ] ) ;
    }

    for ( i = 0 ; i < N ; i++ ) {
        for ( j = i + 1 ; j < N ; j++ ) {
            if ( array[ i ] < array [ j ] ) {
                hold = array[ i ] ;
                array[ i ] = array[ j ] ;
                array[ j ] = hold ;
            } 
        }
    }
    printf("\nThe large 3rd element =  %d" , array[ 2 ] ) ;
    return 0 ; 
}