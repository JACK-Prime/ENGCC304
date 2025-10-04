#include <stdio.h>
#include <stdlib.h>

int main () {
    char filename[50] ; //{50 byte)  49 ตัวอักษร + null terminator (\0)
    printf("Enter file name: ") ;
    scanf("%s" , filename ) ;

    FILE *fp = fopen( filename , "r" ) ; //กำหนด file pointer = open file
    if ( fp == NULL ) {
        printf("\nError opening file.") ;
        exit( 1 ) ;
    }//end if 

    char word[ 100 ] = { 0 } ; 
    int n  = 0 ;
    // Read data of file in specific format
    while(fgets( filename, sizeof(filename), fp) != NULL ) {
        n++ ;
    }//end while 

    fclose( fp ) ;//close file

    printf("Total number of words in '%s' : %d words\n", filename , n ) ;

    return 0 ; 
}