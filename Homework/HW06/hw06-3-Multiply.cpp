/*
    รับตัวเลขจากผู้ใช้มา 2 จำนวน เพื่อแสดงแม่สูตรคูณบนหน้าจอคอมพิวเตอร์ โดยแสดงแม่สูตรคูณจากตัวเลขแรกที่รับจากผู้ใช้ ไปสิ้นสุดยังตัวเลขสุดท้ายที่รับจากผู้ใช้
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น) */
#include <stdio.h>
int main () {
    int start_num = 0, end_num = 0 , y = 0 , x = 0 ; // Y = rows ,X = colums

    printf("Start number : ") ;
    scanf("%d", &start_num) ;
    printf("End number : ") ;
    scanf("%d" , &end_num );

    for (y = start_num ; y <= end_num ; y++) {  // แกน Y เพิ่ม
        for (x = 1 ; x <= 9 ; x++) { // แกน X เพิ่ม
            printf("%d x %d = %d\n", y, x, y * x);
        }//end for2
        printf("\n");
    }//end for1
    return 0; 
}
