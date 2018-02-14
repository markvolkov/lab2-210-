#include <stdlib.h>
#include <stdio.h>

int main() {

    int theSize;
    char* pal;

    printf("Please enter the size of the string!\n");
    scanf("%d", &theSize);
    pal = (char*) malloc((theSize) * sizeof(char));
    printf("Please enter the string!\n");
    scanf(" %s", pal);

    int palindrome = 0;
    int counter = 0;
    for (int i = theSize-1; i > 0; i--) {
        printf("%c - %c", *(pal+counter), *(pal+i));
        if (*(pal+counter) != (*(pal+i))) {
            palindrome = 0;
            break;
        }
        palindrome = 1;
        counter++;
    }

    palindrome == 1 ? printf("The string entered is a palindrome\n") : printf("The string entered is not a palindrome\n");
    free(pal);
    return 0;
}
