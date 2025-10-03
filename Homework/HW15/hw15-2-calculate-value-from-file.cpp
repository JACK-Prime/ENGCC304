/*  จงอ่านค่าที่ได้จากไฟล์นำมาเพื่อนำมาคำนวณหาผลรวมที่ได้รับจากผู้ใช้
    ข้อมูลภายในไฟล์ a15-2.txt
        2
    Test case:
        Input vale from user to B: 12
    Output:
        Read File to A is 2
        Input value from user is 12
        Answer = 14

    Test case:
        Input vale from user to B:
            20
    Output:
        Read File to A is 2
        Input value from user is 20
        Answer = 22
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int num_user = 0 ;
    printf("Input vale from user to B: ") ;
    scanf("%d" , &num_user ) ;

    FILE *fp = fopen("a15-2.txt" , "r" ) ;
    if (fp == NULL) {
        printf("\nError opening file.") ;
        exit( 0 ) ;
    }//end if 

    int num_file ;
    
    // Read data of file in specific format
    while (fscanf(fp, "%d", &num_file) != EOF) ;

    fclose(fp) ;
    printf("\nRead File to A is %d\n", num_file) ;
    printf("Input value from user is %d\n" , num_user ) ;
    printf("Answer = %d\n" , num_file + num_user) ; 

    return 0 ; 
}