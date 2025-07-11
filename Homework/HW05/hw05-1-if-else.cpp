/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>
int main () {
    char CH1,CH2,CH3,CH4 ;     

    printf("Input 4 characters : ") ;
    scanf("%c %c %c %c" , &CH1,&CH2,&CH3,&CH4) ;

    printf("Result : %c %c %c %c",CH4, CH3 ,CH2 ,CH1) ;

    return 0 ;
}