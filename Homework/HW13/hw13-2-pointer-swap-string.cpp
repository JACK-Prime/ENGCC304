/*  ผู้ใช้พิมพ์ข้อความเข้ามาในระบบ และให้คุณทำการแสดงการกลับตัวอักษรทั้งหมดที่ผู้ใช้กรอกมา เช่น ผู้ใช้กรอกมาว่า Hello World คุณจะต้องแสดงบนหน้าจอว่า dlroW olleH
    (กำหนดให้เขียนวิธีการสลับ โดยใช้ตัวแปรประเภท Pointer เท่านั้น)

    Test case: Hello world
    Output: dlrow olleH

    Test case: RMUTL
    Output: LTUMR

    Test case: Orio
    Output: oirO 
*/
#include <stdio.h>
#include <string.h>

void swapSTR(char * , char * ) ;

int main () {
    char words[30] ;
    char reverse_words[30] ;

    printf("Enter words : ") ;
    fgets(words, sizeof(words), stdin) ;
    words[strlen(words) - 1 ] = '\0';

    swapSTR( words , reverse_words ) ; //string,char ไม่ใช้ &

    printf("Reverse word = %s" , reverse_words ) ;
    return 0 ; 
}

void swapSTR(char *in , char *out) {
    for (int i = 0 ; i < strlen(in) ; i++) {
        out[ i ] = in[ (strlen(in) - 1) - i ] ;
    }//end for 
    out[ strlen(in) ] = '\0'; //--> oirO'\0'
}