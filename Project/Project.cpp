#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char choice[10];
    int error = -1;
    for (int count = 0;count <= 5;count++)
    {
        printf("Please make menu choice: ");
        if (fgets(choice, sizeof(choice), stdin) != NULL) {
            // Invalid input (not a number)
            int number = atoi(choice);
            printf("%d", number);
            //printf("%d", error);
            //return 1;
        }
        else
        {
            printf("%d   \n",error);
            printf("%d", error);
            return 1;
        }
    }
    return 0;
}
//End of the code