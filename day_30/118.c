#include<stdio.h>
int main(){
    int id;
    char title[50], author[50];
    printf("Enter Book ID: ");
    scanf("%d", &id);

    printf("Enter Book Title: ");
    scanf("%s", title);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("\nLibrary Record\n");
    printf("Book ID: %d\n", id);
    printf("Book Title: %s\n", title);
    printf("Author: %s\n", author);
    return 0;
}