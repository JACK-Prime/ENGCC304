// TODO: #8 Refactor using CODEX pattern
#include <stdio.h>
#include <conio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    printf("This is %d + %d = %d ", a, b, a + b) ;
    for (int i = 0 ; i < d - 30 ; i++) {
        if (i < 30) {
            printf("Here ") ;
            if (i == 8) { 
                printf("This is 8. ") ;
            }//end if 
        }//end if
    printf("ok") ;
    }//end for 
    return 0;
}//end function
