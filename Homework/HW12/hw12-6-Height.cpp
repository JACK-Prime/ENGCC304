/*
    ผู้ใช้กรอกชื่อและความสูงของคนในโรงเรียนในห้อง A และห้อง B และเรียงลำดับของคนที่ตัวเล็กที่สุดไปยังตัวใหญ่ที่สุดในแต่ละห้อง และเรียงลำดับของคนทั้งโรงเรียนจากตัวที่ใหญ่ที่สุดมายังตัวเล็กที่สุด

    Test case:
        Room A
        Name : John
        Height (cm) : 176.6
        Name : Job
        Height (cm) : 177.5
        Name : Aim
        Height (cm) : 149.8
        Name : Mon
        Height (cm) : 158.9
        Name : Ammy
        Height (cm) : 151.0
        Name : A
        Height (cm) : 169.7
        Name : -1

        Room B
        Name : Komsam
        Height (cm) : 176.1
        Name : Samart
        Height (cm) : 165.4
        Name : Sunu
        Height (cm) : 168.1
        Name : -1

    Output:
        Room A -> Aim Ammy Mon A John Job
        Room B -> Samart Sunu Komsam
        School -> Job John Komsam A Sunu Samart Mon Ammy Aim
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Stuedent {
    char Name[50] ;
    float Height ;
} typedef S ;
//prototype
int inputclass_A() ;
int inputclass_B() ;
void All_class(int , int ) ;
//globla variable
S Class_A[100] ;
S Class_B[100] ;
S all_student[200] ; 
int count_A = 0 ;
int count_B = 0 ;
int count_ALL  = 0;

int main () {
    int i = 0  , j = 0 ; 
    count_A = inputclass_A( ) ;
    count_B = inputclass_B( ) ;
    //merge & sort 
    All_class(count_A , count_B) ;
    //display
    printf("Room A -> ");
    for ( int i = 0 ; i < count_A ; i++) {
        printf("%s ", Class_A[ i ].Name) ;
    }
    printf("\nRoom B -> ");
    for ( int i = 0 ; i < count_B ; i++) {
        printf("%s ", Class_B[ i ].Name) ;
    }
    printf("\nSchool -> ");
    for ( int i = 0 ; i < ( count_A + count_B ) ; i++) {
        printf("%s ", all_student[ i ].Name) ;
    }
    return 0 ; 
}//end main program

int inputclass_A( ) {
    char name[50] ; 
    int count = 0 ; 
    printf("Room A\n") ; 
    while (true) {
        printf("Name : ") ;
        scanf(" %s", name) ; //เป็นชั่วคราว
        if (strcmp(name , "-1") == 0) break ; ///check ก่อน

        strcpy(Class_A[ count ].Name, name ) ; // ใส่เก็บ Name หลัก
        printf("Height (cm) : ") ;
        scanf("%f" , &Class_A[ count ].Height ) ;
        count++ ;
    }
    printf("\n") ;
    //sort min to max
    for ( int  i = 0 ; i < count ; i++ ) { //เรียงน้อยไปมาก
        for ( int j = i + 1 ; j < count ; j++ ) { //เริ่มนับช่องที่ 2
            if (Class_A[ i ].Height > Class_A[ j ].Height) {
            S holder       = Class_A[ i ] ;   // เก็บ struct ทั้งตัว
            Class_A[ i ]   = Class_A[ j ] ;   // ย้าย j มา i
            Class_A[ j ]   = holder;         // ใส่ของเก่ากลับ j
            }
        }
    }//end for sort 
    return count ;
} 

int inputclass_B() {
    char name[50] ; 
    int count = 0 ;
    printf("\nRoom B\n") ; 
    while (true) {
        printf("Name : ") ;
        scanf(" %s", name) ; //เป็นชั่วคราว
        if (strcmp(name , "-1") == 0) break ; ///check ก่อน

        strcpy(Class_B[ count ].Name, name ) ; // ใส่เก็บ Name หลัก
        printf("Height (cm) : ") ;
        scanf("%f" , &Class_B[ count ].Height ) ;
        count++ ;
    }
    printf("\n") ;
    //sort min to max
    for ( int  i = 0 ; i < count ; i++ ) { //เรียงน้อยไปมาก
        for ( int j = i + 1 ; j < count ; j++ ) { //เริ่มนับช่องที่ 2
            if (Class_B[ i ].Height > Class_B[ j ].Height) {
            S holder       = Class_B[ i ] ;   // เก็บ struct ทั้งตัว
            Class_B[ i ]   = Class_B[ j ] ;   // ย้าย j มา i
            Class_B[ j ]   = holder;         // ใส่ของเก่ากลับ j
            }
        }
    }//end for sort 
    return count ;
} 

void All_class(int count_A , int count_B) {
    int i = 0 , j = 0 ;
    //merge
    for ( i = 0 ; i < count_A ; i++ ) {
        all_student[ i ] = Class_A[ i ] ; 
    }
    for ( j = 0 ; j < count_B ; j++ ) {
        all_student[ i + j ] = Class_B[ j ] ;
    } 
    //sort max to min
    for (int i = 0 ; i < ( count_A + count_B ) ; i++ ) {
        for (int j = i + 1 ; j < ( count_A + count_B ) ; j++ ) {
            if ( all_student[ i ].Height < all_student[ j ].Height ) {
                S holder         = all_student[ i ] ;
                all_student[ i ] = all_student[ j ] ;
                all_student[ j ] = holder ;
            }
        }
    }
}
