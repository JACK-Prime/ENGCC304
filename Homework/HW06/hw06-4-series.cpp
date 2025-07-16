/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
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
        Sum = 11111103
*/
#include <stdio.h>
#include <math.h>
int main () {
    int i = 0, j = 0,digit = 0 ,sum = 0 ,series = 0 ,result = 0 ;
    //int put
    printf("Enter ditgit number : ") ;
    scanf("%d" , &digit);
    //out put 
    printf("Series = ");
    for (i = 0 ; i+1 <= digit ; i++) {
        series = (9*(pow(10,i)));
        result += series ;
        sum += result ;
        printf("%d", result);
        
        for (j = i; j < digit - 1 ; j++) {
            printf(" + ");
            break; 
        }
    } 
    printf("\nSum = %d",sum);
    return 0 ;
}