/*  สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    char   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : Mai
        Age : 24
        Sex : M
        Score : 99.99

        Person B
        Name : Mon
        Age : 21
        Sex : F
        Score : 87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points
*/
#include <stdio.h>

struct Person {
	char  Name[20] ;
	int   Age ;
	char  Sex ;
	float Score ;
} ;

int main () {
    int i = 0 , n = 2 ;
    struct Person Info[ n ] ;
    //input
    for ( i = 0 ; i < n ; i++ ) {
        printf("Person %c\n" , 'A' + i ) ;
        printf("Name : ") ;
        scanf("%s" , Info[ i ].Name ) ;
        printf("Age : ") ;
        scanf("%d" , &Info[ i ].Age ) ; 
        printf("Sex : ") ;
        scanf(" %c" , &Info[ i ].Sex ) ; 
        printf("Score : ") ;
        scanf("%f" , &Info[ i ].Score ) ; 
    }
    //display
    printf("_______Result_______") ;
    for ( i = 0 ; i < n ; i ++) {
        printf("--| Person %c Information |--\n" , 'A' + i ) ; 
        printf(" Name : %s (%c) \n" , Info[ i ].Name , Info[ i ].Sex ) ;
        printf("  Age : %d years old\n" , Info[ i ].Age  ) ;
        printf("Score : %.2f points\n" , Info[ i ].Score ) ;
    }
}