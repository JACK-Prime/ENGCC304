/*  ให้เข้าโปรแกรมสุ่มตัวเลขเข้าไปใส่ในตัวแปรอาเรย์ขนาด N ช่อง โดยที่ตัวแปร N คือค่าที่ผู้ใช้กรอกเข้ามา จากนั้นให้คุณเขียนโปรแกรมเพื่อหาค่าที่มากที่สุด และค่าที่น้อยที่สุดภายในตัวแปรอาเรย์นี้ พร้อมทั้งแสดงข้อมูลทุกอย่างภายในอาเรย์ออกมา
    (กำหนดให้ค่าที่สุ่มมา มีช่วงข้อมูลอยู่ที่ 10-99 เท่านั้น)
    (กำหนดให้การแสดงผลแบบชิดขอบขวา 2 ช่องเท่านั้น)

    Test case:
        Input N :  11
    Output:
        Index:  0  1  2  3  4  5  6  7  8  9 10
        Array: 99 18 27 16 74 28 43 47 25 10 88

        Max = 99
        Min = 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Random_Arr(int arr[] , int n , int min , int max ) ; 
void Show_Arr(int arr[] , int n ) ;
void Show_Max_Min(int arr[] , int n ) ;

int main () {
    int n  = 0 ;
    printf("%8s : " , "Input N" ) ;
    scanf("%d" , &n ) ;
    int Num[n] ;

    Random_Arr( Num , n , 10 , 99 ) ;
    Show_Arr( Num , n ) ;
    Show_Max_Min( Num , n ) ;
    return 0 ; 
}

void Random_Arr(int input_arr[] ,int n , int min , int max )  {
    srand( time ( NULL ) ) ; // Seed the random number generator with the current time
    for (int i = 0 ; i < n ; i++ ) {
        input_arr[ i ] = rand() % (max - min + 1) + min ; 
    } 
} 

void Show_Arr(int arr[] ,int n ) {
    int  i = 0 ;
    printf("\n%6s: " , "Index" ) ;
    for (i = 0 ; i < n ; i++ ) {
        printf("%2d " , i ) ;
    }
    printf("\n%6s: ", "Array" ) ;
    for ( i = 0 ; i < n ; i ++ ) {
        printf("%2d " , arr[ i ] ) ;
    } 
}

void Show_Max_Min (int arr[] ,int n ) {
    int MAX = -99999 ,MIN = 99999 , i ; 

    for ( i = 0 ; i < n ; i++ ) {
        if ( arr[ i ]  > MAX ) MAX = arr[ i ] ;
        if ( arr[ i ] < MIN ) MIN = arr[ i ] ;
    }
    printf("\n\n%6s= %2d" ,"MAX" , MAX ) ; 
    printf("\n%6s= %2d" ,"MIN" , MIN ) ; 
}

