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
//prime nuber  คือ จำนวนที่มีตัวหารหรือตัวประกอบได้เพียง 2 จำนวนเท่านั้น คือตัวมันเอง และ 1  (ทำแบบ loop -->> ไม่นับ 1 กับเลขตัวมันเอง)
#include <stdio.h>
#include <stdbool.h>

int main () {
    int i = 0 ;
    int num = 0 , count = 0 ;
    bool prime ;

    printf("Enter number : ") ;
    scanf("%d",&num) ;
    
    for (i = num ; i >= 2 ; i--) {
        prime = true ; // reset val
        for ( count = 2 ; count < i ; count++ ) {// ลองหารทุกตัวตั้งแต่ 2 ถึง (เลขนั้น-1) //ไม่เอาตัวมันเอง 
            if (i % count == 0 ) { //เจอหารลงตัว
                prime = false ;
                break ;//stop for loop
            }//end if 
        }//end for 
        if ( prime ){//ไม่เจอหารลงตัวร that's prime number 
            printf("%d ",i) ;
        }//end if 
    }//end for (main)
    return 0 ;
}
