#include <stdio.h>
#include <stdbool.h>

int main () {
    
    int N = 0 ;
    int i = 0 ;
    bool prime = true ;

    printf("Enter N :\n") ;
    scanf("%d", &N) ;

    int array[N] = {0} ;

    for ( i = 0 ; i < N ; i++) {
        printf("Input [%d] : \n", i) ;
        scanf("%d", &array[i]);
    }//end for

    printf("\nIndex = ");
    for (int j = 0 ; j < i ; j++ ) {
        printf("%d ", j) ;
    }//end for

    printf("\nArray = ");
    for (int j = 0 ; j < i ; j++ ) {
        prime = true ;//reset
        for (int count = 2 ; count < array[ j ] ; count++ ) {// ลองหารทุกตัวตั้งแต่ 2 ถึง (เลขนั้น-1) //ไม่เอาตัวมันเอง 
            if (array[ j ] % count == 0 ) { //เจอหารลงตัว
                prime = false ;
                break ;//stop for loop
            }//end if 
        }//end for 
        if ( prime == false ) printf("# ") ; 
        else printf("%d ", array[ j] ) ;
    }//end for 

    return 0 ;
}