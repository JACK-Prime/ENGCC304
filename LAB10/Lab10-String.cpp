#include <stdio.h>
#include <string.h>

int main () {
    char word[20] ;
    char reverse_word[20] ;
    int i , j ;

    printf("Enter word: ") ;
    scanf("%s" , word) ;

    //strlwr( word ) ; //เปลี่ยนให้เป็นตัวเล็ก  หรือ วิธีด้านล่างด้วย ASCII <----- method ที่ 1

    for ( i  = 0 ; i < strlen( word ) ; i++ ) {  // <----- method ที่ 2
        if (word[ i ] >= 'A' && word[ i ] <= 'Z') {
            word[ i ] = word[ i ] + 32 ; // ดูใน ASCII table (decimal ตัวพิมพ์ใหญ่ห่างกัน 32 กับตัวพิมพ์เล็ก)
        }
    }

    for ( i  = 0 ; i < strlen( word ) ; i++ ) { //strlen ,มันจะนับ '\0' ตอนท้ายด้วย
        reverse_word[ i ] = word[ (strlen(word) - 1 ) - i ] ;
    }
    if ( strcmp(reverse_word,word) == 0) printf("\nPass") ;
    else printf("\nNot Pass.") ;

    return 0 ;
}