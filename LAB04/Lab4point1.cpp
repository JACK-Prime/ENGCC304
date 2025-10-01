#include <stdio.h>

int main () {

    int Days = 0, seconds = 0 ;
    
    printf("Input Days:") ;
    scanf("%d",&Days) ;

    seconds = (Days * 24 )* 3600 ;
    printf("%d Days = %d seconds", Days,seconds) ;

    return 0 ;
}//end function