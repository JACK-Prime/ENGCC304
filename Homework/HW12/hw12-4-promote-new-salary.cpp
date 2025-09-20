/*  ผู้บริหารต้องการวิเคราะห์พัฒนาการของพนักงานในบริษัทและศักยภาพของพนักงานจากทักษะที่พัฒนาขึ้นของแต่ละคน ซึ่งแปลงค่าความสามารถของแต่ละคนออกมาเป็นค่า EXP โดยแบ่งอัตราการขึ้นเงินเดือนของแต่ละคนดังนี้
    EXP อยู่ในช่วง 0-1,000 		จะได้รับเงินเดือน x1
	EXP อยู่ในช่วง 1,000-2,000 	จะได้รับเงินเดือน x1.2
	EXP อยู่ในช่วง 2,000-3,000 	จะได้รับเงินเดือน x1.4
	EXP อยู่ในช่วง 3,000-4,000 	จะได้รับเงินเดือน x1.6
	EXP อยู่ในช่วง 4,000-5,000 	จะได้รับเงินเดือน x1.8
	EXP อยู่ในช่วง 5,000 ขึ้นไป	จะได้รับเงินเดือน x2
    โดยผู้บริหารมอบหมายให้ HR เป็นคนกรอกข้อมูลพนักงานในบริษัทและประเมินค่า EXP ของพนักงานแต่ละคน พร้อมสรุปจำนวนคนที่ได้รับเงินเดือนในแต่ละขั้น และระบุคนชื่อคนที่ได้เงินเดือนเยอะที่สุด และคนที่เงินเดือนน้อยที่สุด (หากกรอกเลข -1 ในช่อง Name จะถือเป็นการหยุดโปรแกรมและเตรียมแสดงผล)
    
    Test case:
        Employee 1 Name : Atom
        EXP : 2500
        Employee 2 Name : Aom
        EXP : 3230
        Employee 3 Name : Aim
        EXP : 4560
        Employee 4 Name : Jom
        EXP : 5505
        Employee 5 Name : On
        EXP : 950
        Employee 6 Name : Oom
        EXP : 3500
        Employee 7 Name : Ky
        EXP : 2600
        Employee  Name : -1
    Output:
        **** Salary Result ****
        x1.0 count 1
        x1.2 count 0
        x1.4 count 2
        x1.6 count 2
        x1.8 count 1
        x2.0 count 1
        The Employee get x2.0 is Jom
        The Employee get x1.0 is On
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Employee {
    char Name[50] ;
    int EXP ;
    float Multiply ;
} typedef EM ;

float getMultiply(int ) ;

int main() {
    EM emp[100] ;
    int count = 0 ;
    char name[50] ; //เป็นชั่วคราว temp
    int exp ;

    int count1_0 = 0, count1_2 = 0, count1_4 = 0, count1_6 = 0, count1_8 = 0, count2_0 = 0;
    int maxIndex = -1 , minIndex = -1 ;

    while (true) {
        printf("Employee %d Name : ", count + 1) ;
        scanf(" %s", name) ; //เป็นชั่วคราว
        if (strcmp(name, "-1") == 0) break ; ///check ก่อน

        strcpy(emp[count].Name, name) ; // ใส่เก็บ Name หลัก
        printf("EXP : ") ;
        scanf("%d", &emp[count].EXP) ;
        emp[count].Multiply = getMultiply(emp[count].EXP) ; // avtivate function
        // count แต่ละรอบ
        if      (emp[count].Multiply <= 1.0 && emp[count].Multiply > 0  ) count1_0++ ;
        else if (emp[count].Multiply <= 1.2 && emp[count].Multiply > 1.0) count1_2++ ; 
        else if (emp[count].Multiply <= 1.4 && emp[count].Multiply > 1.2) count1_4++ ;
        else if (emp[count].Multiply <= 1.6 && emp[count].Multiply > 1.4) count1_6++ ;
        else if (emp[count].Multiply <= 1.8 && emp[count].Multiply > 1.6) count1_8++ ;
        else if (emp[count].Multiply <= 2.0 && emp[count].Multiply > 1.8) count2_0++ ;
        //เงินเดือนไหนมากสุด และน้อยที่สุด &&
        if (maxIndex == -1 || emp[count].Multiply > emp[maxIndex].Multiply)
            maxIndex = count ;
        if (minIndex == -1 || emp[count].Multiply < emp[minIndex].Multiply)
            minIndex = count ;
        count++ ;
    }
    // show
    printf("\n**** Salary Result ****\n" ) ;
    printf("x1.0 count %d\n", count1_0 ) ;
    printf("x1.2 count %d\n", count1_2 ) ;
    printf("x1.4 count %d\n", count1_4 ) ;
    printf("x1.6 count %d\n", count1_6 ) ;
    printf("x1.8 count %d\n", count1_8 ) ;
    printf("x2.0 count %d\n", count2_0 ) ;

    if (maxIndex != -1) 
        printf("The Employee get x%.1f is %s\n", emp[maxIndex].Multiply, emp[maxIndex].Name) ;
    if (minIndex != -1) 
        printf("The Employee get x%.1f is %s\n", emp[minIndex].Multiply, emp[minIndex].Name) ;

    return 0;
}// end program

float getMultiply(int exp) {
    if (exp >= 0 && exp < 1000) return 1.0;
    else if (exp >= 1000 && exp < 2000) return 1.2 ;
    else if (exp >= 2000 && exp < 3000) return 1.4 ;
    else if (exp >= 3000 && exp < 4000) return 1.6 ;
    else if (exp >= 4000 && exp < 5000) return 1.8 ;
    else return 2.0;
}