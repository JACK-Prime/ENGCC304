/*ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F ! */
#include<stdio.h>

int main () {
    int score = 0 ;

    printf("enter score : ") ;
    scanf("%d" ,&score) ;
    
    for ( ; score >= 80  ;) {
        printf("\nA !") ;// 80 up 
        break ;
    }
    for ( ; score >= 75 && score < 80 ; ) {
        printf("\nB+ !") ;// 75 - 79 
        break ;
    }
    for ( ; score >= 70 && score < 75 ; ) {
        printf("\nB !") ;// 70 - 74 
        break ;
    }
    for ( ; score >= 65 && score < 70 ; ) {
        printf("\nC+ !") ;// 65 - 69 
        break ;
    }
    for ( ; score >= 60 && score < 65 ; ) {
        printf("\nC !") ;// 60 - 64 
        break ;
    }
    for ( ; score >= 55 && score < 60 ; ) {
        printf("\nD+ !") ;// 55 - 59 
        break ;
    }
    for ( ; score >= 50 && score < 55 ; ) { 
        printf("\nD !") ;// 50 - 54 
        break ;
    }
    for ( ;  score < 50  ; ) {
        printf("\nF !") ;// 50 lower
        break ;
    }

    return 0 ;
}