/*  ผู้ใช้กรอกข้อมูลพนักงานในบริษัท โดยจะกรอกข้อมูล ชื่อ, เงินเดือน, อายุการทำงาน ของแต่ละคน โดยเมื่อผู้ใช้กรอกตัว n จะถือเป็นการหยุดโปรแกรมและทำการแสดงข้อมูลเงินเดือนเฉลี่ยของพนักงานในบริษัท และเงินเดือนของทุกคนรวมกันที่ผู้บริหารต้องจ่าย และแสดงคนที่อายุงานเยอะที่สุดพร้อมระบุ ชื่อ เงินเดือน และอายุงาน ของคนๆ นั้น
    Test case:
        Do you want to Enter Employee Information? (y/n) : y
        ----
        Employee Name : Yorn
        Salary (Bath/Month) : 15000
        Duration (Year) : 4 
        Do you want to Enter Employee Information? (y/n) : y
        ----
        Employee Name : Van
        Salary (Bath/Month) : 14550
        Duration (Year) : 2
        Do you want to Enter Employee Information? (y/n) : y
        ----
        Employee Name : Thane
        Salary (Bath/Month) : 22500
        Duration (Year) : 8
        Do you want to Enter Employee Information? (y/n) : n
    Output:
        Average of Salary : 17,350.00 Bath
        Payment of every month : 52,050.00 Bath
        ----------------------------------------
        ** Most duration in this business **
        Name : Thane (8 Years)
        Salary : 22,500.00 Bath
*/
#include <stdio.h>
#include <stdbool.h>

struct Employee {
    char  Name[20] ;
    float Salary  ;
    int Duration ;
	bool Other ;
} typedef EM ;

int main () {

    EM emp[100] ;
    float total_salary = 0.0f , avg_salary = 0.0f ;
    int count = 0 , maxduration = 0;
    char choice = '\0' ;
    int highest = 0 ;
    
    do {
        printf("Do you want to Enter Employee Information? (y/n) : ");
        scanf(" %c", &choice);
        //input after 'y'
        if (choice == 'y') {
            printf("----\n") ;
            printf("Employee Name : ") ;
            scanf(" %s", emp[count].Name);
            printf("Salary (Bath/Month) : ") ;
            scanf("%f", &emp[count].Salary) ;
            printf("Duration (Year) : ") ;
            scanf("%d", &emp[count].Duration) ;

            total_salary += emp[count].Salary ;

            if (emp[count].Duration > maxduration) {
                maxduration = emp[count].Duration ;
                highest = count ;
            }
            count++ ;
        }
    } while (choice != 'n' && choice != 'N' ) ;
    // display after 'n'
    if (count > 0) {
        avg_salary = total_salary / count ;
        printf("\nAverage of Salary : %.2f Bath\n", avg_salary ) ;
        printf("Payment of every month : %.2f Bath\n", total_salary ) ;
        printf("----------------------------------------\n" ) ;
        printf("** Most duration in this business **\n") ;
        printf("Name : %s (%d Years)\n", emp[highest].Name, emp[highest].Duration ) ;
        printf("Salary : %.2f Bath\n", emp[highest].Salary ) ;
    } else printf("No employee data entered.\n" ) ;

    return 0 ;
}