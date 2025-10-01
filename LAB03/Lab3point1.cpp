#include <stdio.h>
int main () {
    float H = 0.0f ,W = 0.0f ;
    float Area ;     

    printf("H =") ;
    scanf("%f",&H ) ;
    printf("W =") ;
    scanf("%f",&W ) ;

    Area = (H * W)/2 ;

    printf("Area : %.1f" , Area) ;

    return 0 ;

}//end function 