/*เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54
*/
#include<stdio.h>
//จาก 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987,
int main () {
    int digits = 0 ;
    int n1 = 0 , n2 = 1  ,next_num = 0 , sum = 0 ;

    printf("Enter digits : ") ;
    scanf("%d", &digits) ;

    printf("Series : ") ;
    for (int i = 1 ; i <= digits ; i++ ) {
        n1 = n2 ;             //Round 1 --> 1    //Round 2 --> 0     //Round 3 --> 1 
        n2 = next_num  ;      //Round 1 --> 0    //Round 2 --> 1     //Round 3 --> 1
        next_num = n1 + n2 ;  //Round 1 --> 1    //Round 2 --> 1     //Round 3 --> 2
        printf("%d " ,next_num) ; 
        
        sum += next_num ;
        for (int j = i ; j <= digits - 1  ; j++ ) { 
            printf("+ ") ;
            break ;
        }//end for 
    }//end for 
    printf("\nSum = %d",sum) ;
}