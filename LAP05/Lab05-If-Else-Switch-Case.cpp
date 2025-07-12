#include <stdio.h>
int main () {
    int score = 0 ;
    int check ;

    printf("Enter score : ") ;
    check = scanf("%d", &score) ;  // printf("%d", check); false = 0 , true = 1  --> if input number = true(1) otherwise false(0) 


    if (check == 0) {
        printf("please enter number only.");
    }
    else if (score >= 80) {
        printf("A !\n");
    }
    else if (score >= 75 && score < 80) { // 75 - 79
        printf("B+ !\n");
    }
    else if (score >= 70 && score < 75) { // 70 - 74
        printf("B !\n");
    }
    else if (score >= 65 && score < 70) { // 65 - 69
        printf("C+ !\n");
    }
    else if (score >= 60 && score < 65) { // 60 - 64
        printf("C !\n");
    }
    else if (score >= 55 && score < 60) { // 55 - 59
        printf("D+ !\n");
    }
    else if (score >= 50 && score < 55) { // 50 - 54
        printf("D !\n");
    }
    else if (score > 100 || score < 0){
        printf("Invalid score");
    }
    else { // score < 50
        printf("F !\n");
    }
    

    return 0 ;
}