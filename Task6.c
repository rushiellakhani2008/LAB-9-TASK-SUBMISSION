#include <stdio.h>

void store_attendance(int array[4][5]);
void attendance_percentage(int array[4][5], int *present);

int main() {
    int attendance[4][5];
    int present;

    store_attendance(attendance);
    attendance_percentage(attendance, &present);

    return 0;
}

void store_attendance(int array[4][5]) {
    int value;
    int i,j;
    printf("Enter 1 for present or 0 for absent\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            while(1) {
                printf("Enter attendance for student %d class %d: ", i+1, j+1);
                scanf("%d", &value);

                if(value == 0 || value == 1){
                    array[i][j] = value;
                    break;
                }
                printf("Invalid input! Enter only 0 or 1.\n");
            }
        }
    }
}

void attendance_percentage(int array[4][5], int *present) {
    int i,j;
	for(i = 0; i < 4; i++) {
        *present = 0;
        float avg = 0.0;

        for(j = 0; j < 5; j++) {
            if(array[i][j] == 1) {
                (*present)++;
            }
        }

        avg = (*present / 5.0) * 100;

        printf("\nThe average attendance of student %d is %.2f%%\n", i+1, avg);

        if(avg < 75)
            printf("Warning! Student %d your average attendance is less than 75%%\n", i+1);
        else
            printf("Student %d your average attendance is greater than 75%%\n", i+1);
    }
}
