#include<stdio.h>
#include<stdbool.h>

int main () {
    char position = '\0' ;
    float completed_pj = 0.0f , experience = 0.0f ;
    int salary = 0 ;
    float exp_bonus = 0.0f , special_bonus = 0.0f , net_salary = 0.0f ;

    printf("\n**************************************************\n") ;
    //--------------------sec 1
    do {
        printf("POSITION\n") ;
        printf("1) Junior Programmer\n") ;
        printf("2) Mid-Level Programmer\n") ;
        printf("3) Senior Programmer\n") ;
        printf("Chose your position ( 1-3 ): ") ;
        scanf(" %c", &position) ;
         
        switch (position) {
            case '1' :
                salary = 20000 ;
                break;
            case '2' :
                salary = 35000 ;
                break;
            case '3' :
                salary = 50000 ;
                break;

            default:
                printf("\nInvalid input,please enter number ( 1-3 )!!\n") ;
                while(getchar() != '\n') ;// เผื่อ user กรอกหลายค่า  
        }         
    } while ( position != '1' && position != '2' && position != '3' ) ;
    //--------------------sec 2
    do {
        printf("Years of Experience: ") ;
        if (scanf("%f", &experience) == 0) { 
            printf("\nInvalid input, please try again !!\n") ;
            while(getchar() != '\n') ; // clear buffer
            continue ; //retry
        }
        if ( experience >= 1 && experience <= 3 ) {
            exp_bonus = salary * 0.1 ;
            break ;
        }//end else if 
         else if ( experience >= 4 && experience <= 5 ) {
            exp_bonus = salary * 0.15 ;
            break;
        }//end else if 
         else if (experience > 5 ) {
            exp_bonus = salary * 0.2 ;
            break;
        }//end else 
        else {
            exp_bonus = 0 ;
            break;
        }    
    } while (true) ; //end do while 

    //--------------------sec 3
    do {
        printf("Number of Projects Completed this Year: ") ;
        if (scanf("%f", &completed_pj) == 0) {
            printf("\nInvalid input, please try again !!\n") ;
            while(getchar() != '\n') ;
            continue ; //retry
        }
        if (completed_pj > 5) {
            special_bonus = salary * 0.05 ;
            break;
        }//end else if 
        else {
            special_bonus = 0 ;
            break;
        }//end else 
    } while (true) ;

    // //--------------------sec 4
    net_salary = salary + exp_bonus + special_bonus ;
    printf("\nBase Salary : %d THB\n", salary) ;
    printf("Experience Bonus : %.0f THB\n", exp_bonus) ;
    printf("Special Bonus : %.0f THB\n", special_bonus) ;
    printf("Net Salary : %.0f THB\n", net_salary );

    return 0 ;
}//end function