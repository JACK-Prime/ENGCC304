#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand( time( NULL ) ) ; //seed random
    int score = 100 ;
    int random_num = 22 ; // ถ้าไม่ใส่ + 1 จะนับตั้งแต่ 0 - 99  ---> ถ้าใส่ 1 - 100
    int guess_num = 0 ;
    int ans = 0 ,check = 0 ;
    int min = 1 , max = 100 ;
    do{
        printf("\nDo you want to play game (1=play,-1=exit) : \n") ;
        check = scanf("%d", &ans) ; // check %d integer only 

        if ( check != 1 ) {
            printf("\nPlease enter only 1 or -1.\n") ;   
            while(getchar() != '\n') ;//clear buffer ex. abd\n เจอ \n ออกลูป
        }
        else if ( ans == -1) {
            printf("\nSee you again.\n") ;
        }
        else if ( ans == 1 ) {
            score = 100 ;
            min = 1 ;
            max = 100 ;
            
            printf ("\n(Score=%d)\n" , score ) ;
            do{
                printf("\nGuess the winning number (%d-%d) :\n", min , max ) ;
                check = scanf("%d", &guess_num ) ; // check %d integer only 

                if (check == 0) {
                    printf("\nPlease, enter number between %d - %d \n", min , max ) ;
                    while(getchar() != '\n');
                }
                else if ( guess_num == random_num ) {
                    printf("\nThat is correct! The winning number is %d.\n", random_num ) ;
                    printf("\nScore this game: %d\n", score ) ;
                }
                else if ( guess_num > random_num ) {
                    score -= 10 ;
                    printf("\nSorry, the winning number is LOWER than %d.", guess_num ) ;
                    printf(" (Score=%d)\n", score ) ;
                    max = guess_num - 1;
                }
                else if ( guess_num < random_num ) {
                    score -= 10 ;
                    printf("\nSorry, the winning number is HIGHER than %d.", guess_num ) ;
                    printf(" (Score=%d)\n", score ) ;
                    min = guess_num + 1;
                }
                else {
                    printf("\nPlease, enter number between %d - %d \n" , min , max ) ;
                }
            }while ( guess_num != random_num ) ;
        }
        else{
            printf("\nPlease enter only 1 or -1.\n");
        }
    }while( ans != -1 );

    return 0 ;
}