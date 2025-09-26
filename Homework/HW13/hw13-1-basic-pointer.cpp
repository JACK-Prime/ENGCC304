/*  ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี
    (กำหนดให้เขียนวิธีการสลับ 2 ค่านี้ โดยใช้ตัวแปรประเภท Pointer เท่านั้น)
    
    Test case:
        Input A
        Name : Yorn
        Age : 31
        Input B
        Name : Thane
        Age : 20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)
*/
#include <stdio.h>

struct Info {
    char Name[20] ;
    int Age ;
} typedef SI ;

void show( SI [] ,int  ) ;
void swap(int * ,int * ) ;

int main () {
    int i = 0 , n = 2 ;
    SI infomation[ n ] ;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Input %c\n" , 'A' + i ) ;
        printf("Name : ") ;
        scanf("%s" , infomation[ i ].Name ) ;
        printf("Age : ") ;
        scanf("%d" , &infomation[ i ].Age ) ; 
    }
    printf("\n** RESULT **\n") ;
    show( infomation , 2 ) ;
    printf("\n** SWAP AGE **\n") ;
    swap(&infomation[ 0 ].Age , &infomation[ 1 ].Age ) ;
    show( infomation , 2 ) ;
    return 0 ; 
}//end main program

void show(SI infomation[], int n) {
    for ( int i = 0 ; i < n ; i++ ) {
        printf("Name: %s (%d)\n", infomation[ i ].Name , infomation[ i ].Age) ;
    }
}

void swap(int *A , int *B) {
    int hold = *A ;
    *A = *B ;
    *B = hold ;
}


