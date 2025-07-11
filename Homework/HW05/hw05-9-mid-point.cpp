/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include <stdio.h>
int main () {
    float Ax = 0.0f ,Ay = 0.0f ;
    float Bx = 0.0f ,By = 0.0f ;
    float Mx = 0.0f ,My = 0.0f ;

    printf("Input A Point (x,y) : ") ;
    scanf("%f %f",&Ax,&Ay) ;
    printf("Input A Point (x,y) : ") ;
    scanf("%f %f",&Bx,&By) ;
    //process
    Mx = ((Ax + Bx) / 2) ;
    My = ((Ay + By) / 2) ;
    
    printf("Mid Point of A and B is ( %.1f, %.1f )" ,Mx,My) ;

    return 0 ;
}