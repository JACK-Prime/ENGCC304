#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand( time( NULL ) ) ; //seed random
    int random_num = 22 ; // ถ้าไม่ใส่ + 1 จะนับตั้งแต่ 0 - 99  ---> ถ้าใส่ 1 - 100
    int guess_num = 0 ;
    int ans = 0 , check = 0 ;
    int score , min , max ;
    

    do{
        printf("\nDo you want to play game (1=play,-1=exit) : \n") ;
        check = scanf("%d", &ans) ; // check %d integer only 

        if ( check != 1 ) {
            printf("\nPlease enter only 1 or -1.\n") ;   
            while(getchar() != '\n') ;//clear buffer ex. abd\n เจอ \n ออกลูป
        }//end if
        else if ( ans == -1) {
            printf("\nSee you again.\n") ;
        }//end else if
        else if ( ans == 1 ) {
            score = 100 ;
            min = 1 ;
            max = 100 ;
            
            printf ("\n(Score=%d)\n" , score ) ;
            do{
                printf("\nGuess the winning number (%d-%d) :\n", min , max ) ;
                check = scanf("%d", &guess_num ) ; // check %d integer only 

                if (check != 1) {
                    printf("\nPlease, enter number between %d - %d \n", min, max);
                    while(getchar() != '\n');
                }//end if 
                else if (guess_num < min || guess_num > max) {
                    printf("\nPlease, enter number between %d - %d \n", min, max);
                }//end else if 
                else if (guess_num == random_num) {
                    printf("\nThat is correct! The winning number is %d.\n", random_num);
                    printf("\nScore this game: %d\n", score);
                }//end else if 
                else if (guess_num > random_num) {
                    score -= 10 ;
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess_num, score);
                    max = guess_num - 1;
                }//end else if
                else {
                    score -= 10 ;
                    if (score <= 0) {
                        printf("\nGAME OVER >>>> your score is %d.\n", score);
                        break;
                    }
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess_num, score);
                    min = guess_num + 1;
                }//end else 
            } while ( guess_num != random_num && score > 0) ;//end do-while
        }//end else 
        else{
            printf("\nPlease enter only 1 or -1.\n");
        }//end else 
    } while( ans != -1 );//end do-while 

    return 0 ;
}