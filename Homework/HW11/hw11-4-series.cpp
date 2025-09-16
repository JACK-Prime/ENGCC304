/*จงสร้างฟังก์ชันเพื่อหาผลรวมของอนุกรม 1! + (1+2!) + (2+3!) + (3+4!) + (4+5!) + ... โดยโปรแกรมจะทำการรับค่าจำนวนพจน์ของอนุกรมมา และให้คุณสร้างฟังก์ชันในการหาผลรวม เช่น ผู้ใช้กรอกเลข 3 ก็ต้องแสดงผลรวมของอนุกรม 1! + (1+2!) + (2+3!)

    Test case:
        3
    Output:
        Sum = 12

    Test case:
        6
    Output:
        Sum = 888
*/
#include <stdio.h>
// keys = (n-1 + n!) --> 1! + (1+2!) + (2+3!) +
int seriesFAC(int ) ;

int main () {

    int digit = 0 , ans = 0 ;

    printf("Enter number : ") ;
    scanf("%d" , &digit ) ;

    ans = seriesFAC(digit) ; //return series

    printf("sum = %d", ans ) ; 
    return 0 ; 
}

int seriesFAC(int digits) {

    int sum = 0  ,series = 0 ,fact = 0 ;
    int i = 0 , j = 0 ; 

    for ( i = 1 ; i <= digits ; i++ ) {
        fact = 1 ;
        for ( j = 1 ; j <= i ; j++ ) {//factorial เรื่มตี้ 1 --> 5 fact = 1x2x3x4x5
            fact *= j ;
        }
        sum = (i - 1) + fact ; //keys = (n-1 + n!)
        series += sum ;
    }
    return series ;
}