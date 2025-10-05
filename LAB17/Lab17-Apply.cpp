#include <stdio.h>
#include <string.h>
/*  1. เพิ่มหนังสือใหม่
    2. ค้นหาหนังสือตามชื่อ
    3. แสดงรายชื่อหนังสือทั้งหมด
    4. ออกจากโปรแกรม*/
typedef struct {
    int id;
    char title[ 100 ];
    char author[ 100 ];
    int year;
} Book;

const int MAX_BOOKS = 100 ; // ค่าคงที่

void addBook(Book books[], int *count) ;
void searchBook(Book books[], int count, char title[]) ;
void displayBooks(Book books[], int count) ;

int main () {
    Book books[ MAX_BOOKS ] ;
    int count = 0 ;   
    int choice ;
    char search[ 100 ] ;

    printf("\n*** LIBRARY MANAGEMENT SYSTEM ***\n") ;
    do {
        printf("\n######################################\n") ;
        printf("Select an option :\n") ;
        printf("1. Add new book\n") ;
        printf("2. Search book by title\n") ;
        printf("3. Display all books\n") ;
        printf("4. exit\n");
        printf("Choose an option(1-4): ") ;
        scanf("%d", &choice) ;
        getchar() ; //กัน loop 

        switch (choice) {
            case 1 :
                addBook(books, &count) ; ///เพิ่ม count ทีละ 1 มี กดfunction 1
                break;
            case 2 :
                printf("Enter Title to Search: ") ;
                fgets(search, sizeof( search ), stdin) ;
                search[strcspn(search , "\n")] = '\0' ; // ตัด \n ออก
                searchBook(books , count , search) ;
                break;
            case 3 :
                displayBooks(books , count) ;
                break;
            case 4 :
                printf("Exiting the program. Thank you!\n") ;
                break ;
            default :
                printf("\nInvalid choice, please enter (1-4).\n") ;
        }
    
    } while (choice != 4 ); /// if choice = 4 exit the program

    return 0;
}
//===================================================================
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n") ;
        return ;
    }

    printf("Enter Book ID: ") ;
    scanf("%d", &books[ *count ].id) ;
    getchar();

    printf("Enter Title: ") ; 
    fgets(books[ *count ].title, sizeof(books[ *count ].title), stdin) ;
    books[ *count ].title[strcspn(books[ *count ].title, "\n")] = '\0' ;

    printf("Enter Author: ") ;
    fgets(books[ *count ].author, sizeof(books[ *count ].author), stdin) ;
    books[ *count ].author[strcspn(books[ *count ].author, "\n")] = '\0' ;

    printf("Enter Year: ") ;
    scanf("%d", &books[ *count ].year) ;
    getchar();

    (*count)++ ;
    printf("\nBook added successfully!\n") ;
}

//===================================================================
void searchBook(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[ i ].title, title) == 0 ) { //เจอใน array
            printf("Book ID: %d\n", books[ i ].id ) ;
            printf("Title: %s\n", books[ i ].title ) ;
            printf("Author: %s\n", books[ i ].author ) ;
            printf("Year: %d\n", books[ i ].year ) ;
            return ;
        }
    }
    printf("\nBook not found.\n");
}
//===================================================================
void displayBooks(Book books[], int count) {
    if ( count == 0 ) {
        printf("No books in the library.\n");
        return;
    }

    for ( int i = 0 ; i < count ; i++ ) {
        printf("Book ID: %d\n", books[ i ].id ) ;
        printf("Title: %s\n", books[ i ] .title ) ;
        printf("Author: %s\n", books[ i ].author ) ;
        printf("Year: %d\n", books[ i ] .year ) ;
    }
}