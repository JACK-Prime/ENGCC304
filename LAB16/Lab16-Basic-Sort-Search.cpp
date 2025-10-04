#include <stdio.h>

int main () {
    int series[7] = { 15, 7, 25, 3, 73, 32, 45 } ;
    int N = 7 ;
    int i , j , hold ; 

    //show Old Series:
    printf("Old Series : ") ;
    for( i = 0 ; i < N ; i++ ) {
        printf("%2d", series[ i ] ) ;
        if ( i < N - 1) printf(",") ;
    }
    printf("\n");
    for ( i = 0 ; i < N ; i++ ) {
        for ( j = i + 1 ; j < N ; j++ ) {
            if ( series[ i ] > series [ j ] ) {
                hold = series[ i ] ;
                series[ i ] = series[ j ] ;
                series[ j ] = hold ;
            } 
        }
    }
    //show New Series 
    printf("New Series : ") ;
    for( i = 0 ; i < N ; i++ ) {
        printf("%2d", series[ i ] ) ;
        if ( i < N - 1 ) printf(",") ;
    }
    printf("\n") ;

    for( i = 0 ; i < N ; i++ ) {
        if( series[ i ] == 32 ) {
            printf("Pos of 32 : %d", i);
            break;
        }
    }

    return 0 ;
}