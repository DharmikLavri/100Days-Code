#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (daysLate > 30) {
        printf("Membership Cancelled.\n");
    }
    else {
        if (daysLate <= 5) {
            fine = daysLate * 2;
        }
        else if (daysLate <= 10) {
            fine = 5 * 2 + (daysLate - 5) * 4;
        }
        else { // daysLate between 11 and 30
            fine = 5 * 2 + 5 * 4 + (daysLate - 10) * 6;
        }
        printf("Library fine: ₹%d\n", fine);
    }

    return 0;
}
