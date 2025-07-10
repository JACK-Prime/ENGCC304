#include <stdio.h>
/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
int main (){
    
    int     a = 10 ;
    float   b = 20 ;
    char    c[20] = "Haha" ;
    char    d = 'a' ;

    printf("%d %.2f %s %c", a, b, c, d) ; //TODO: #10 Display variable a, b, c and d.
    return 0 ;
}
