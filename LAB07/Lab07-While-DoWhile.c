#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void GUESS_play();

int main () {
    srand( time( NULL ) ) ; //seed random
    int random_num ; 
    int guess_num = 0 ;
    int score = 0 , max = 0 , min = 0 ;
    char ans[3] ;
    bool condition = true ;
    
    while (condition) {
        ans[3] = '\0' ;
        printf("\nDo you want to play game (1=play,-1=exit) : \n") ;
        scanf("%s", ans) ; // check %d integer 

        if ( ans[0] == '1' && ans[1]== '\0') {
            score = 100 ;
            printf("\n(Score=%d)\n" , score ) ;
            GUESS_play();
        
        }//end if
        else if ( ans[0] == '-' && ans[1] == '1' && ans[2]== '\0') {
            printf("\nSee you again.\n") ;
            condition = false ;
        }//end else if
        else{
            printf("\nPlease enter only 1 or -1.\n") ;
        }//end else 
    }//end while
    return 0 ;
}

void GUESS_play() {
    int guess_num ;
    int check = 1 ;
    int score = 100 ;
    int max = 100  ;
    int min = 1  ;
    int random_num = rand() % 100 + 1 ; // ถ้าไม่ใส่ + 1 จะนับตั้งแต่ 0 - 99  ---> ถ้าใส่ 1 - 100
    do{
        printf("\nGuess the winning number (%d-%d) :\n", min , max ) ;
        check = scanf("%d", &guess_num ) ; // check %d integer only 

        if (check != 1) {
            printf("\nPlease, enter number between %d - %d \n", min, max) ;
             while(getchar() != '\n') ;//clear buffer เช่น abd\n เจอ \n ออกลูป ----เอาไว้กันเผื่อ user input ที่ไม่ใช่ %d
        }//end if 
        else if (guess_num < min || guess_num > max) {
            printf("\nPlease, enter number between %d - %d \n", min, max) ;
        }//end else if 
        else if (guess_num == random_num) {
            printf("\nThat is correct! The winning number is %d.\n", random_num) ;
            printf("\nScore this game: %d\n", score) ;
            break;
        }//end else if 
        else if (guess_num > random_num) {
            score -= 10 ;
            if (score <= 0) {
                printf("\nGAME OVER >>>> your score is %d.\n", score) ;
                break;
            }//end if 
            printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess_num, score);
            max = guess_num - 1 ;
        }//end else if
        else {
            score -= 10 ;
            if (score <= 0) {
                printf("\nGAME OVER >>>> your score is %d.\n", score) ;
                break;
            }//end if 
            printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess_num, score);
            min = guess_num + 1 ;
        }//end else
    } while (true) ;
}
