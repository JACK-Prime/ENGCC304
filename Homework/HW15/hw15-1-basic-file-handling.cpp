/*  จงเขียนโปรแกรมเพื่ออ่านค่าจากไฟล์ a15-1.txt แล้วนำมาแสดงผลบนโปรแกรม
    ข้อมูลภายในไฟล์ a.txt
        Hello World
    
    Output:
        Text in file = Hello World
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE *fp = fopen("a15-1.txt" , "r" ) ;
    if (fp == NULL) {
        printf("\nError opening file.") ;
        exit( 0 ) ;
    }//end if 

    char Text[50] ;
    printf("Text in file = ");
    while (fscanf(fp, "%s", Text) != EOF) {
        printf("%s ", Text) ;
    }

    fclose(fp) ;

    return 0 ; 
}