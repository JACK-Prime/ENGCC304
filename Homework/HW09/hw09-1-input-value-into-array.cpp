/*จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8    */
#include <stdio.h>

int main () {
    int N = 0 ;
    int i = 0 ;

    printf("Enter element of array :") ;
    scanf("%d", &N) ;

    int array[N] = {0} ;

    for ( i = 0 ; i < N ; i++) {
        printf("Input [%d] : ", i) ;
        scanf("%d", &array[i]);
        if ( array[i] == -1 ) {
            break ;
        }//end if find in array has -1
    }//end for

    printf("\nIndex = ");
    for (int j = 0 ; j < i ; j++ ) {
        printf("%d ", j) ;
    }//end for 
    printf("\nArray = ");
    for (int j = 0 ; j < i ; j++ ) {
        printf("%d ", array[j]) ;
    }//end for 
    return 0 ;
}