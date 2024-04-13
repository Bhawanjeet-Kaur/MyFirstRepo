#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char choice[10];
    int error = -1;
    printf("Please make menu choice: ");
    if (fgets(choice, sizeof(choice), stdin) != NULL) {
        // Invalid input (not a number)
        int number = atoi(choice);
        printf("%d", number);
        return 0;
        //printf("%d", error);
        //return 1;
    }
    else
    {
        printf("\n");
        printf("%d", error);
        return 1;
    }
}
