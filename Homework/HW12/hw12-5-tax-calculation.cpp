/*  HR ของบริษัทเน็ตเวิร์คทำการกรอกข้อมูลพนักงานลงไปในระบบคำนวณฐานภาษีเพื่อเตรียมส่งยอดภาษีสู่ฝ่ายบัญชี โดยจะหักภาษี ณ ที่จ่าย 7% ของเงินเดือนที่ได้ ให้คุณคำนวณภาษีพนักงานทั้งหมดที่บริษัทของคุณต้องชำระภายในปีนี้ (กรอกเลข -1 ถือเป็นการสิ้นสุดการกรอก และทำการสรุปผลภาษีที่ต้องชำระภายในปีนี้) และสร้างฟังก์ชันที่ระบุคนที่ต้องชำระภาษีเยอะที่สุดในบริษัทมาแสดงในผลสรุปยอดของบริษัทด้วย
    Test case:
        Employee 1's Name : Omar
        Sarary (Bath/Month) : 12750
        Employee 2's Name : Alice
        Sarary (Bath/Month) : 15900
        Employee 3's Name : Max
        Sarary (Bath/Month) : 19860
        Employee 4's Name : -1
    Output:
        All salary per month: 48,510.00 Bath
        All salary per year: 582,120.00 Bath
        Tax (7% per year) : 40,748.40 Bath
        Most tax in company : Max (16,682.40 Bath per year)

    Test case:
        Employee 1's Name : John
        Sarary (Bath/Month) : 15780
        Employee 2's Name : Oven
        Sarary (Bath/Month) : 16890
        Employee 3's Name : May
        Sarary (Bath/Month) : 17870
        Employee 4's Name : Bill
        Sarary (Bath/Month) : 22100
        Employee 5's Name : -1
    Output:
        All salary per month: 72,640.00 Bath
        All salary per year: 871,680.00 Bath
        Tax (7% per year) : 61,017.60 Bath
        Most tax in company : Bill (18,564.00 Bath per year) */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Employee {
    char Name[50] ;
    float Salary ;
} typedef EM ;

float most_em_salary(int , EM[] ) ; //the most employee's salary

int main () {
    EM salary[100] ;
    int i = 0 ;
    char name[50] ; //ชั่วคราว
    float total_salary = 0 ; 
    int H_Index = 0 ; //index คนที่มากที่สุด

    while (true) {
        printf("Employee %d's Name : ", i + 1) ;
        scanf(" %s", name) ; //เป็นชั่วคราว
        if (strcmp(name, "-1") == 0) break ; ///check ก่อน

        strcpy(salary[ i ].Name, name) ; // ใส่เก็บ Name หลัก
        printf("Sarary (Bath/Month) : ") ;
        scanf("%f" , &salary[ i ].Salary) ;
        total_salary += salary[ i ].Salary ;
        i++ ;
    }
    H_Index = most_em_salary( i , salary ) ; 
    //cal
    float total_salary_year = total_salary * 12 ;
    float total_salary_tax_year = total_salary_year * 0.07 ;
    float Most_tax_company = salary[ H_Index ].Salary * 12 * 0.07 ;
    //display 
    printf("\nAll salary per month : %.2f Bath\n", total_salary ) ; 
    printf("All salary per year: %.2f Bath\n", total_salary_year ) ;
    printf("Tax (7%% per year) : %.2f Bath\n", total_salary_tax_year ) ;
    printf("Most tax in company : %s (%.2f Bath per year)\n",salary[H_Index].Name, Most_tax_company) ;

    return 0 ; 
}

float most_em_salary(int count, EM salary[]) { //find the most employee's salary
    int i = 0 ;
    int H_Index = 0 ;
    for (i = 0 ; i < count ; i++) {
        if (salary[ i ].Salary > salary[ H_Index ].Salary) 
            H_Index = i ;
    } 
    return H_Index ;
}