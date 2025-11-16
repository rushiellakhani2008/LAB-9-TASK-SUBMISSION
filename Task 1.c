#include<stdio.h>

#define WARDS 3
#define BEDS 5

void recordStatus(int arr[WARDS][BEDS]);
void countBeds(int arr[WARDS][BEDS], int *occupied, int *empty);
void displayStatus(int arr[WARDS][BEDS]);

int main() {
    int hospital[WARDS][BEDS];
    int occupied = 0, empty = 0;

    recordStatus(hospital);
    countBeds(hospital, &occupied, &empty);
    displayStatus(hospital);

    printf("\nTotal occupied beds: %d\n", occupied);
    printf("Total available beds: %d\n", empty);

    return 0;
}

void recordStatus(int arr[WARDS][BEDS]) {
	int i,j;
    printf("\nEnter bed status (1 = occupied, 0 = empty):\n");
    for(i = 0; i < WARDS; i++) {
        printf("\n--- Ward %d ---\n", i + 1);
        for(j = 0; j < BEDS; j++) {
            printf("Bed %d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void countBeds(int arr[WARDS][BEDS], int *occupied, int *empty){
	int i,j;
    for(i = 0; i < WARDS; i++) {
        for(j = 0; j < BEDS; j++) {
            if(arr[i][j] == 1)
                (*occupied)++;
            else
                (*empty)++;
        }
    }
}

void displayStatus(int arr[WARDS][BEDS]) {
	int i,j;
    printf("\n== Bed Status Report ==\n");
    for(i = 0; i < WARDS; i++) {
        if(i == 0) printf("\nGeneral Ward: ");
        else if(i == 1) printf("\nICU Ward:     ");
        else printf("\nPrivate Ward: ");

        for(j = 0; j < BEDS; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}
