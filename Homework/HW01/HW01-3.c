#include <stdio.h>
int main() {
    char firstName[20], lastName[20] = "";

    prtintf("First Name: ");
    scanf("%s", firstName);
    printf("Last Name: ");
    scanf("%s", lastName);
    printf("%s %s TC, RMUTL, Chiang Mai, Thailand" ,firstName, lastName);
    return 0;
}