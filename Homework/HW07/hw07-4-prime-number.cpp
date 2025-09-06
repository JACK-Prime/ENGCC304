/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
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
#include <stdbool.h>
    int main () {
        int i = 0 ;
        int num = 0 , count = 0 ;
        bool prime = true ;

        printf("Enter number : ");
        scanf("%d",&num);
        
        i = num ;

        while ( i >= 2 ) {
            count = 2 ;
            prime = true ;
            while ( count < i ) {
                while ( i % count == 0 ) {
                    prime = false ;
                    break ;
                }
                count++ ; 
            }
            while ( prime == true ){
                printf("%d ",i) ;
                break;
            }
            i-- ;
        }
        return 0 ;
 }