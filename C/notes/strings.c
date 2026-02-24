// CM string notes
#include <stdio.h>
#include <string.h>
int main(){
    char subject[] = "Computer Science Principles";
    char book[50];
    char title[] = "Ms. LaRose";






    printf("%s\n", subject);




    printf("Write the title of a book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);


    printf("\nThe book is %s\n", book);
    //concatnation  in C
    char name[] = "Vienna";
    char last[] = "LaRose";
    strcat(name," ");
    strcat(name, last);
    char full_name[70];
    strcat(full_name, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYXZ");


    printf("%s \n", name);


    // lenght of string
    printf("%lu", strlen(name));





    return 0;
}