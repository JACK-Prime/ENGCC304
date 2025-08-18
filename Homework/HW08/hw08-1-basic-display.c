/*เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67  */
#include<stdio.h>

int main () {
    int n = 0 ,numbers = 0  ; 
    float avg = 0.0f ,sum = 0.0f ; 

    printf("Enter value n : \n") ;
    scanf("%d" , &n );

    for (int i = 1 ; i <= n ; i++ ) {
        printf("Enter number %d\n",i) ;
        scanf("%f" , &numbers ) ;
        sum += numbers ;
    }//end for 

    avg = sum / n ;
    printf("\nSum = %.0f\n", sum) ;
    printf("Avg = %.2f", avg) ;

    return 0 ;

}