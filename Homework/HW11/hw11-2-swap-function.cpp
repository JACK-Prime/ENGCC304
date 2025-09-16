/* ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี
    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)
*/
#include <stdio.h>

void swap(int *, int * ) ; //prototype 

int main  () {
    char nameA[30] , nameB[30]  ; 
    int ageA = 0 , ageB = 0 ;  

    printf("Input A\n\tName : ") ;
    scanf("%s" , nameA ) ;
    printf("\n\tAge : ") ;
    scanf("%d" , &ageA ) ;
    
    printf("\nInput B\n\tName : ") ;
    scanf("%s" , nameB ) ;
    printf("\n\tAge : ") ;
    scanf("%d" , &ageB ) ;

    printf("\n** RESULT **\n") ;
    printf("Name: %s (%d)\n", nameA, ageA);
    printf("Name: %s (%d)\n", nameB, ageB);
     
    swap(&ageA , &ageB) ; //function แต่ใช้ pointer & อ้างอิง int address

    printf("\n** SWAP AGE **\n") ;
    printf("Name: %s (%d)\n", nameA, ageA);
    printf("Name: %s (%d)\n", nameB, ageB);
    return 0 ;
}

void swap(int *A , int *B) {
    int hold = *A ;
    *A = *B ;
    *B = hold ;
}