//ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก
#include <stdio.h>
#include <conio.h>
#include <math.h>

int cal_armstrong(int ,int  ) ; // Recursion Function

int main () {
    int num = 0 , digits = 0 , sum = 0 ;

    do {//กันเกรียน
        printf("Enter number : ") ;
        if (scanf("%d", &num) == 0) {
            printf("please enter number only!!\n") ;
            while(getchar() != '\n') ; //clear
            continue ;
        }
        else break ;    
    } while (true) ;
     

    digits = log10(num) + 1 ; //หาหลักของจำนวนนั้น  10^x = num  --> 10,100,1000,10000 ไม่ใช่เลข armstrong แน่นอน
    sum = cal_armstrong( num , digits ) ;

    if (sum == num ) printf("Pass.") ;
    else printf("Not Pass.") ;
    
    return 0 ;
}

int cal_armstrong(int num , int digits ) {  // ex. 153 --> 1^3 + 5^3 + 3^3 = 153
    if ( num == 0 ) return 0 ; //หมด ครบ digits ของหลักเลข
    else {
        int position = num % 10 ; //หา position ของ num
        return pow( position , digits ) + cal_armstrong( num / 10 , digits) ; //วนทำไปเรื่อยๆใน function
    }
}