    /*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>
int main () {
    int num = 0 , i = 0 , j = 0 ;

    printf("Enter number : ") ;
    scanf("%d",&num) ;
    
    for (i = num ; i >= 2 ; i--) {
        if (i == 2 || i == 3 || i == 5 || i == 7){
                printf("%d ",i);
            }
        for (;i % 2 > 0 && i % 3 > 0 && i % 5 > 0 && i % 7 > 0 ;) {
            printf("%d ",i);
            break;
        }
    }
    return 0 ;
}