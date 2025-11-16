#include <stdio.h>

int main() {
    int rows, col, i, j, key, found = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[rows][col];

    printf("\nEnter elements of the %d x %d array:\n", rows, col);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", (*(arr + i) + j)); 
        }
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            if (*(*(arr + i) + j) == key) { 
                printf("\nElement %d found at Row = %d , Column = %d\n",
                       key, i + 1, j + 1); 
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("\nElement not found in the array.\n");

    return 0;
}
