/*  จากชุดข้อมูลต่อไปนี้ จงเขียนฟังก์ชันเมื่อหาค่ามากที่สุดภายในอาเรย์ โดยที่
    ฟังก์ชันแรก ให้สร้างฟังก์ชันแบบ Pass by value เพื่อหาค่าความสูงที่สุดในอาเรย์ Height
    ฟังก์ชันสอง ให้สร้างฟังก์ชันแบบ Pass by reference เพื่อหาค่าอายุที่มากที่สุดในอาเรย์ Age

    int Height[10] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[10] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    Test case:
        
    Output:
        Max Height = 191
        Max Age = 19
*/
#include <stdio.h>

int Max_height(int [] ) ;
void Max_age(int *, int *) ;

int main () {

    int Height[10] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[10] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;
    int MAX_Height = 0 , MAX_Age = 0  ;

    MAX_Height = Max_height(Height) ;
    printf("\n\tMax Height = %d", MAX_Height) ;

    Max_age( Age, &MAX_Age ) ;
    printf("\n\tMax Age = %d", MAX_Age) ;

    return 0 ; 
 }

int Max_height(int input[] ) {
    int MAX = 0 ;
    for (int i = 0 ; i < 10 ; i++ ) {
        if (input[ i ] > MAX ) MAX = input[ i ] ; 
    }
    return MAX ;
}

void Max_age(int *input, int *MAX ) {
    for (int i = 0 ; i < 10 ; i++ ) {
        if (input[ i ] > *MAX ) *MAX = input[ i ] ; 
    }
}