#include <stdio.h>

int main() {
    int choice, coach, seat;

    printf("Welcome to Train Seat Booking\n");

    printf("Select Coach:\n");
    printf("1. AC\n");
    printf("2. Non-AC\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("AC Coach selected.\n");

            printf("Select Seat:\n");
            printf("1. Window\n");
            printf("2. Middle\n");
            printf("3. Aisle\n");
            scanf("%d", &seat);

            switch (seat) {
                case 1:
                    printf("Window seat booked in AC coach.\n");
                    break;
                case 2:
                    printf("Middle seat booked in AC coach.\n");
                    break;
                case 3:
                    printf("Aisle seat booked in AC coach.\n");
                    break;
                default:
                    printf("Invalid seat selection.\n");
                    break;
            }
            break;

        case 2:
            printf("Non-AC Coach selected.\n");

         
            printf("Select Seat:\n");
            printf("1. Window\n");
            printf("2. Middle\n");
            printf("3. Aisle\n");
            scanf("%d", &seat);

            switch (seat) {
                case 1:
                    printf("Window seat booked in Non-AC coach.\n");
                    break;
                case 2:
                    printf("Middle seat booked in Non-AC coach.\n");
                    break;
                case 3:
                    printf("Aisle seat booked in Non-AC coach.\n");
                    break;
                default:
                    printf("Invalid seat selection.\n");
                    break;
            }
            break;

        default:
            printf("Invalid coach selection.\n");
            break;
    }

    return 0;
}
