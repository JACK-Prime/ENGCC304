/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main () {
    int num1 = 0 ,num2 = 0 ,num3 = 0 ;
    
    printf("Input[1] : ") ;
    scanf("%d", &num1) ;
    printf("Input[2] : ") ;
    scanf("%d", &num2) ;
    printf("Input[3] : ") ;
    scanf("%d", &num3) ;
    //condition and process 
    if ((num1 > num2) && (num1 > num3) && (num2 > num3)) { // 1 2 3
        printf("Sort >>> %d %d %d" , num1,num2,num3);
    }//end if
    else if ((num1 > num2) && (num1 > num3) && (num3 > num2)) { // 1 3 2
        printf("Sort >>> %d %d %d" , num1,num3,num2);
    }//end else if
    else if ((num2 > num1) && (num2 > num3) && (num1 > num3)) { // 2 1 3
        printf("Sort >>> %d %d %d" , num2,num1,num3);
    }//end else if
    else if ((num2 > num1) && (num2 > num3) && (num3 > num1)) { // 2 3 1
        printf("Sort >>> %d %d %d" , num2,num3,num1);
    }//end else if
    else if ((num3 > num1) && (num3 > num2) && (num1 > num2)) { // 3 1 2
        printf("Sort >>> %d %d %d" , num3,num1,num2);
    }//end else if
    else if ((num3 > num1) && (num3 > num2) && (num1 > num2)) { // 3 2 1
        printf("Sort >>> %d %d %d" , num3,num2,num1);
    }//end else if 
    else {
        printf("numbers are equal or All numbers are equal");
    }//end else

    return 0 ;
}