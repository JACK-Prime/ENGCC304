/* ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด
    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three */
    #include <stdio.h>
    int main () {
        int num1 = 0,num2 = 0,num3 = 0 ;
        
        printf("Enter 3 numbers : ") ;
        scanf("%d %d %d",&num1,&num2,&num3) ;

        printf("1st Number = %d\n",num1) ;
        printf("2nd Number = %d\n",num2) ;
        printf("1rd Number = %d\n",num3) ;

        if (num1 >= num2 && num1 >= num3) { 
            printf("The 1st Number is the greatest among three") ;
        }
        else if (num2 >= num1 && num2 >= num3) { 
            printf("The 2nd Number is the greatest among three") ;
        }
        else if (num3 >= num1 && num3 >= num2) {
            printf("The 3rd Number is the greatest among three") ;
        }
        else {
            printf("Invalid number");
        }
        
        return 0 ;
    }