/*  จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    Test case:
        Enter new element of Array : 4
        Input : 3
        Input : 4
        Input : 2
        Input : 5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 5 6 7 9
*/
#include <stdio.h>

int main () {
    int old_array[ 5 ] = { 9, 2, 6, 1, 7 } ;
    int i , j , N , new_length , old_length , holder ;
     
    printf("Enter new element of Array : ") ;
    scanf("%d" , &N ) ;
    int hold_array[ N ] ;
    for ( i = 0 ; i < N ; i++ ) {
        printf("Input : ") ;
        scanf("%d" , &hold_array[ i ] ) ; 
    }
    //merge
    old_length = sizeof(old_array) / sizeof(old_array[0]) ;
    new_length = old_length + N ;
    int new_array[new_length] ; 

    for ( i = 0 ; i < old_length ; i++ ) {
        new_array[ i ] = old_array[ i ] ; //base 
    }
    for ( j = 0 ; j < new_length ; j++ ) { //add new to base  
        new_array[ i + j ] = hold_array[ j ] ;
    }
    //sort
    for ( i = 0 ; i < new_length ; i++ ) {  
        for ( j = i + 1 ; j < new_length ; j++ ) {
            if ( new_array[ i ] > new_array[ j ] ) {
                holder = new_array[ i ] ;
                new_array[ i ] = new_array[ j ] ;
                new_array[ j ] = holder ;
            }
        }
    }
    //display
    printf("\nOld Array : ") ;
    for ( i = 0 ; i < old_length ; i++ ) {
        printf("%d " , old_array[ i ] ) ; 
    }
    printf("\nNew Array : ") ;
    for ( i = 0 ; i < new_length ; i++ ) {
        printf("%d " , new_array[ i ] ) ; 
    }
    return 0 ;
}