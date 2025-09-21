#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20] ;
    char ID[5] ;
    float Scores[5] ; 
    float Average ;
} typedef S ;

S input_student ( ) ;
void checkgrade(float ) ;
float avg(S ,int  ) ;
void show (S ) ; 

S Student_1 ;//globla variable
S Student_2 ;
S Student_3 ; 

int main () {   
    int i = 0 ;
    //input 
    printf("Enter the details of 3 students : \n") ;
    printf("Student 1: \n") ;
    Student_1 = input_student( ) ;
    printf("Student 2: \n") ;
    Student_2 = input_student( ) ;
    printf("Student 3: \n") ;
    Student_3 = input_student( ) ;
    //display
    show(Student_1) ;
    show(Student_2) ;
    show(Student_3) ;
    return 0 ; 
} //end program

S input_student ( ) {
    int i = 0 ;
    S st ;
    while (getchar() != '\n') ;  // <-- เคลียร์ buffer ก่อนอ่านชื่อ add on แก้นานพอควร
    printf("Enter name: ") ; 
    fgets(st.Name , sizeof(st.Name), stdin) ;// มี \n อยู่ใน name หลังจาก fgets buffer 
    st.Name[strcspn(st.Name, "\n")] = '\0' ; // ตัด \n ออก
    printf("Enter ID : ") ;
    scanf("%4s", st.ID) ;
    while (getchar() != '\n') ;

    for ( i = 0 ; i < 5 ; i++ ) {
        printf("Scores in Subject %d : " , i + 1) ;
        scanf("%f", &st.Scores[ i ] ) ;
    }
    printf("\n") ;
    return st;
}

void checkgrade(float score) {
    if (score >= 80) printf ("A   ") ;
    else if (score >= 75 && score < 80) printf ("B+ ") ; // 75 - 79
    else if (score >= 70 && score < 75) printf ("B  ") ; // 70 - 74
    else if (score >= 65 && score < 70) printf ("C+ ") ; // 65 - 69
    else if (score >= 60 && score < 65) printf ("C  ") ; // 60 - 64
    else if (score >= 55 && score < 60) printf ("D+ ") ; // 55 - 59
    else if (score >= 50 && score < 55) printf ("D  ") ; // 50 - 54
    else                                printf ("F  ") ; // score < 50
}

float avg (S st, int count) {
    float sum = 0 ;
    for ( int i = 0 ; i < 5 ; i++ ) {
        sum += st.Scores[ i ] ;
    }
    return sum / count ;
}

void show (S st) {
    int i = 0 ;
    printf("Name : %s\n", st.Name) ; 
    printf("ID: %s\n" , st.ID ) ;
    printf("Scores: ") ;
    for (i = 0 ; i < 5 ; i++ ) {
        printf("%.0f ", st.Scores[ i ] ) ;     
    }
    printf("\nGrades: ") ;
    for (i = 0 ; i < 5 ; i++ ) {
        checkgrade(st.Scores[ i ]) ;    
    }
    printf("\nAverage Scores: %.1f \n" , avg (st , 5 ) ) ;
    printf("\n") ;
}