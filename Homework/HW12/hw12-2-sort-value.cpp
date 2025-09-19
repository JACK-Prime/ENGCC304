/* สร้าง Struct เพื่อเก็บข้อมูลของคน 4 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    Test case:
        Student A
        Name : Yorn
        Score : 21.42

        Student B
        Name : Omen
        Score : 56.00

        Student C
        Name : Alice
        Score : 80.75

        Student D
        Name : Violet
        Score : 67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42
*/
#include <stdio.h>

struct Student {
    char  Name[20] ;
	float Score ;
} typedef S ;

int main () {
    int i = 0 , n = 4 ;
    S Group[ n ] ;
    //input
    for ( i = 0 ; i < n ; i++ ) {
        printf("Student %c\n" , 'A' + i ) ;
        printf("Name : ") ;
        scanf("%s" , Group[ i ].Name ) ;
        printf("Score : ") ;
        scanf("%f" , &Group[ i ].Score ) ; 
        printf(" \n") ;
    }
    //display
    printf("%10s %10s %10s %10s\n" , Group[ 0 ].Name , 
                                     Group[ 1 ].Name , 
                                     Group[ 2 ].Name ,
                                     Group[ 3 ].Name ) ;
    printf("%10.2f %10.2f %10.2f %10.2f\n" , Group[ 0 ].Score , 
                                             Group[ 1 ].Score , 
                                             Group[ 2 ].Score ,
                                             Group[ 3 ].Score ) ;                          
    return 0 ;
}