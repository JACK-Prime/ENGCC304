/* ผู้ใช้พิมพ์ข้อความเข้ามาในระบบ และให้คุณทำการแสดงการกลับตัวอักษรทั้งหมดที่ผู้ใช้กรอกมา เช่น ผู้ใช้กรอกมาว่า Hello World คุณจะต้องแสดงบนหน้าจอว่า dlroW olleH
    Test case:
        Hello world
    Output:
        dlrow olleH

    Test case:
        RMUTL
    Output:
        LTUMR

    Test case:
        Orio
    Output:
        oirO
*/
#include <stdio.h>
#include <string.h>

void swapSTR(char *, char *) ;

int main () {
    char words[30] ;
    char reverse[30] ;

    printf("Enter words : ") ;
    fgets(words, sizeof(words), stdin) ;
    words[strlen(words) - 1 ] = '\0';

    swapSTR(words , reverse ) ; 

    printf("\n%s" , reverse) ;

}

void swapSTR(char *in , char *out) {
    for (int i = 0 ; i < strlen(in) ; i++) {
        out[ i ] = in[ (strlen(in) - 1) - i ] ;
    }//end for 
}