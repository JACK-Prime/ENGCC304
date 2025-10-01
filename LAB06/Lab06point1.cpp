#include <stdio.h>
int main () {
    int num ;

    printf("User Input: ") ;
    scanf("%d", &num);

    switch (num) {
        case 0:
            printf("Result: zero");
            break;
        case 1:
            printf("Result: one");
            break;
        case 2:
            printf("Result: two");
            break;
        case 3:
            printf("Result: three");
            break; 
        case 4:
            printf("Result: four");
            break;
        case 5:
            printf("Result: five");
            break;
        case 6:
            printf("Result: six");
            break;
        case 7:
            printf("Result: seven");
            break;
        case 8:
            printf("Result: eight");
            break;
        case 9:
            printf("Result: nine");
            break;
        case 10:
            printf("Result: ten");
            break;
        case 11:
            printf("Result: eleven");
            break;
        case 12:
            printf("Result: twelve");
            break;
        case 13: 
            printf("Result: thirteen");
            break;
        case 14:
            printf("Result: fourteen");
            break;
        case 15: 
            printf("Result: fifteen");
            break; 
        case 16:
            printf("Result: sixteen");
            break;
        case 17: 
            printf("Result: seventeen");
            break; 
        case 18:
            printf("Result: eighteen");
            break;
        case 19:
            printf("Result: nineteen");
            break; 
        case 20:
            printf("Result: twenty");
            break; 
        case 21:
            printf("Result: twenty-one");
            break;
        case 22:
            printf("Result: twenty-two");
            break;
        case 23:
            printf("Result: twenty-three");
            break; 
        case 24:
            printf("Result: twenty-four");
            break;
        case 25:
            printf("Result: twenty-five");
            break; 
        case 26:
            printf("Result: twenty-six");
            break; 
        case 27:
            printf("Result: twenty-seven");
            break; 
        case 28:
            printf("Result: twenty-eight");
            break; 
        case 29: 
            printf("Result: twenty-nine");
            break; 
        case 30:
            printf("Result: thirty");
            break;
        default: 
            printf("Result: invalid.Please enter 0-30.");
            break;
    }
    return 0 ; 
}//end function