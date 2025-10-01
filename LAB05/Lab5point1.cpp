#include <stdio.h>

int main () { 
    char Employees_ID [11]= "" ;
    float salary_per_hr = 0.0f , hr_working = 0.0f , cal_salary = 0.0f ;

    printf("Input the Employees ID(Max. 10 chars):\n") ;
    scanf("%s" ,Employees_ID) ;
    printf("Input the working hrs:\n") ;
    scanf("%f",&hr_working) ;
    printf("Salary amount/hr:\n") ;
    scanf("%f",&salary_per_hr);
    //process
    cal_salary = salary_per_hr * hr_working ;
    //output
    printf("\nExpected Output:\n") ;
    printf("Employees ID = %s\n" ,Employees_ID) ;
    printf("Salary = U$ %.2f",cal_salary);

    return 0 ;
}//end function