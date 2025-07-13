/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>
int main() {
    int num = 0;
    printf("Enter number : ") ;
    scanf("%d", &num) ;

    for (; num >= 1000; num -= 1000) { //mean( if num < 1000 )---> pass function for loop!
        printf("M") ;
    }
    for (; num >= 900; num -= 900) {
        printf("CM") ;
    }
    for (; num >= 500; num -= 500) {
        printf("D") ;
    }
    for (; num >= 400; num -= 400) {
        printf("CD") ;
    }
    for (; num >= 100; num -= 100) { 
        printf("C") ;
    }
    for (; num >= 90; num -= 90) {
        printf("XC") ;
    } 
    for (; num >= 50; num -= 50) {
        printf("L") ;
    }
    for (; num >= 40; num -= 40) {
        printf("XL") ;
    } 
    for (; num >= 10; num -= 10) {
        printf("X") ;
    }
    for (; num >= 9; num -= 9) { 
        printf("IX") ;
    }
    for (; num >= 5; num -= 5) { 
        printf("V") ;
    }
    for (; num >= 4; num -= 4) {
        printf("IV") ;
    }
    for (; num >= 1; num -= 1) {
        printf("I") ; 
    }
    return 0 ;
}