/*จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
- หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
- หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น*/
#include <stdio.h>

int main () {
    int N = 0, i = 0 , check = 0;

    printf("Enter number: \n");
    check = scanf("%d",&N); // ถ้า input %d 
    printf("\n%d",check ); // ตรวจ

    if (check == 0){
        printf("\nInvalid input(number only!!)") ;
    }//end if 
    else if ( (N % 2) != 0) {
        printf("Series: ");
        for ( i = 1 ; i <= N ; i++) {
            if ((i % 2) != 0) {
                printf("%d ",i); 
            }//end if
        }//end for
    }//end else if
    else {
        printf("Series: ");
         for ( i = N ; i >= 0 ; i--) {
            if ((i % 2) == 0) {
                printf("%d ",i); 
            }//end if 
        }// end for
    }//end else
    return 0 ; 
}//end function 