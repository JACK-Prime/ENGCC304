/*    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/
#include <stdio.h>

int sum = 0 ;

int summation(int ,int ,int ) ;

int main () {
    int one ,two ,three ;

    printf("Input 1 : \n") ;
    scanf("%d" , &one) ;

    printf("Input 2 : \n") ;
    scanf("%d" , &two) ;

    printf("Input 3 : \n") ;
    scanf("%d" , &three) ;

    sum = summation(one , two ,three) ;

    printf("Summation = %d (Calculate by Additional Function)",sum) ;
    return 0 ;
}

int summation(int num1 , int num2 , int num3 ) {
    return sum = num1 + num2 + num3 ; 
}