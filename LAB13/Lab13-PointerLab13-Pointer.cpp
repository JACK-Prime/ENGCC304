#include <stdio.h>

void swapNumbers(int **, int **) ;

int main() {
    int num1, num2 ;      
    int *ptr1, *ptr2 ;   // pointer

    printf("Enter num1 : ") ;
    scanf("%d" , &num1 ) ;
    printf("Enter num2 : ") ;
    scanf("%d" , &num2 ) ;
    
    ptr1 = &num1 ;
    ptr2 = &num2 ;

    printf("Before swap (num1 & num2) : %d , %d \n", num1, num2 ) ;
    printf("Before swap adress (num1 & num2) : %d , %d \n", &num1, &num2 ) ;
    printf("Before swap adress(ptr1 & ptr2) : %d , %d \n", &ptr1, &ptr2 ) ;
    printf("Before swap adress(ptr1 & ptr2) : %d , %d \n", ptr1, ptr2 ) ;

    swapNumbers( &ptr1 , &ptr2 ) ; // --> address ส่ง assign pointerไป

    printf("After swap (num1 & num2) : %d , %d \n", num1, num2 ) ;


    return 0;
}

void swapNumbers(int **ptr1, int **ptr2) { //35, 18
    printf("Before swap adress(ptr1 & ptr2) : %d , %d \n", **ptr1, **ptr2 ) ;
    **ptr1 = **ptr1 + **ptr2 ;   //35 + 18 = 53
    **ptr2 = **ptr1 - **ptr2 ;   //53 - 18 = 35
    **ptr1 = **ptr1 - **ptr2 ;   //53 - 35 = 18
}
