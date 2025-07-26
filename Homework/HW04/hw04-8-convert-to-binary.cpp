/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[100] ;
    long decimal ;
    int i = 0,j = 0 ;
    int binary[100];


    printf("Enter Hexadecimal: ") ;
    scanf("%s", hex) ;
    
    decimal = strtol(hex, NULL, 16) ;// base 16 to base 10
    printf("Decimal number is : %ld\n",decimal) ;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary number is : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0 ; 
}
