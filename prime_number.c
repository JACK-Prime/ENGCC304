#include <stdio.h>
#include <stdbool.h>

int main () {
    int i = 0 ;
    int num = 0 , count = 0 ;
    bool prime = true ;

    printf("Enter number : ") ;
    scanf("%d", &num) ;

    i = num ;

    do {
        count = 2 ; //เริ่มตั้งแต่ 2  
        prime = true ;// reset 

        do { 
            if ( i == 2 ) {//ปกติจะมี while (count < i) ; คอย checkS
            prime = true ;
            }//end if
            else if ( i % count == 0 ) {
            prime = false ;
            }        
            count ++ ;           
        } while ( count < i ) ;//ไม่เอาตัวมันเอง //end do-while

        if (prime == true) {
            printf(" %d" , i) ;  
        }//end if 
        i-- ; 
    } while ( i >= 2 ) ;//end do-while (main)
    return 0 ;
}
