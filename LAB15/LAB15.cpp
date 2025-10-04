#include <stdio.h>
#include <stdlib.h>

int word_in_file(char *) ;

int main () {
    char filename[50] ; //{50 byte)  49 ตัวอักษร + null terminator (\0)
    printf("Enter file name: ") ;
    scanf("%s" , filename ) ;

    int n = word_in_file(filename) ;

    printf("Total number of words in '%s' : %d words\n", filename , n) ;

    return 0 ; 
}

int word_in_file (char *filename) {
    
    FILE *fp = fopen( filename , "r" ) ; //open file
    if ( fp == NULL ) {
        printf("\nError opening file.") ;
        exit( 1 ) ;
    }//end if 

    char word[ 100 ] ; 
    int n  = 0 ;
    
    while (fscanf( fp , "%s", word ) != EOF ) {
        n++ ;
    }//end while 

    fclose( fp ) ;//close file
    return n ;
}