/*  จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103 */
#include <stdio.h>
#include <math.h>

int main () {
    int digit = 0 ,i = 0 ;
    int series = 0 ,sum_series = 0 ,sum_total = 0 ;

    printf("Enter digit number : ") ;
    scanf("%d", &digit) ;
    //output
    printf("Series = ");
    do{
        series = 9*(pow(10,i)) ;
        sum_series += series ;
        printf("%d ",sum_series) ; 
        if (i+2 <= digit) { //step ahead
            printf("+ ") ;
        }
        sum_total += sum_series ;
        i++ ;
    }while (i+1 <= digit);
    printf("\nSum = %d",sum_total);
    
    return 0 ;
}