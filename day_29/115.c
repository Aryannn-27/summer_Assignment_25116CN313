#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int choice;
    printf("Enter a string: ");
    gets(str);

    printf("1. Length\n");
    printf("2. Reverse\n");
    printf("3. Uppercase\n");
    printf("4. Lowercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s", str);
            break;

        case 3:
            printf("Uppercase = %s", strupr(str));
            break;

        case 4:
            printf("Lowercase = %s", strlwr(str));
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}