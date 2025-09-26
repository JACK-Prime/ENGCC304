#include <stdio.h>

void Input_Arr(int arr[] , int n ) ; 
void Show_Arr(int arr[] , int n ) ;
void Show_Max(int arr[] , int n ) ;
void Show_Min(int arr[] , int n ) ;

int main () {
    int n  = 0 ;
    printf("Input number of element : " ) ;
    scanf("%d" , &n ) ;
    int Num[n] ;

    Input_Arr( Num , n ) ;
    Show_Arr( Num , n ) ;
    Show_Min( Num , n ) ;
    Show_Max( Num , n ) ;
    return 0 ; 
}

void Input_Arr(int input_arr[] ,int n )  {
    printf("Enter value: ") ;
    for (int i = 0 ; i < n ; i++ ) {
        scanf("%d", &input_arr[ i ] ) ; 
    } 
} 

void Show_Arr(int arr[] ,int n ) {
    int  i = 0 ;
    printf("\n%5s: " , "Index" ) ;
    for (i = 0 ; i < n ; i++ ) {
        printf("%2d " , i ) ;
    }
    printf("\n%5s: ", "Array" ) ;
    for ( i = 0 ; i < n ; i ++ ) {
        printf("%2d " , arr[ i ] ) ;
    } 
}

void Show_Max (int arr[] ,int n ) {
    int MAX = -99999 , i ; 
    for ( i = 0 ; i < n ; i++ ) {
        if ( arr[ i ]  > MAX ) MAX = arr[ i ] ;
    }
    printf("\n%5s= %2d" ,"MAX" , MAX ) ; 
}

void Show_Min (int arr[] ,int n ) {
    int MIN = 99999 , i ; 

    for ( i = 0 ; i < n ; i++ ) {
        if ( arr[ i ] < MIN ) MIN = arr[ i ] ;
    }
    printf("\n\n%5s= %2d" ,"MIN" , MIN ) ; 
}




