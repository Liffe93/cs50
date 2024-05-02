#include <stdio.h>
#include <cs50.h>

int main (void) {
    int height;
    
    do {
        printf("Enter the height of the pyramid (a positive integer): ");
        scanf("%d", &height);
        
        if (height <= 0) {
            printf("Please enter a positive integer.\n");
        }
        else if (height < 0) {
            printf("Please enter a non-negative integer.\n");
        }
    } while (height <= 0);
    
    printf("\n");
    
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
