#include <stdio.h>

int main() {
    char coffeeType, doubleCup, manual;
    int totalTime = 0;

    printf("Enter Coffee Type (W for White, B for Black): ");
    scanf(" %c", &coffeeType);

    // Switch for Coffee Type
    switch (coffeeType) {
        case 'W':
        case 'w':
            printf("Preparing White Coffee...\n");
            printf("Step 1: Put Water (15 mins)\n"); totalTime += 15;
            printf("Step 2: Add Sugar (15 mins)\n"); totalTime += 15;
            printf("Step 3: Mix Well (20 mins)\n"); totalTime += 20;
            printf("Step 4: Add Coffee (2 mins)\n"); totalTime += 2;
            printf("Step 5: Add Milk (4 mins)\n"); totalTime += 4;
            printf("Step 6: Mix Well (20 mins)\n"); totalTime += 20;
            break;

        case 'B':
        case 'b':
            printf("Preparing Black Coffee...\n");
            printf("Step 1: Put Water (20 mins)\n"); totalTime += 20;
            printf("Step 2: Add Sugar (20 mins)\n"); totalTime += 20;
            printf("Step 3: Mix Well (25 mins)\n"); totalTime += 25;
            printf("Step 4: Add Coffee (15 mins)\n"); totalTime += 15;
            printf("Step 5: Mix Well (25 mins)\n"); totalTime += 25;
            break;

        default:
            printf("Invalid Coffee Type!\n");
            return 0; // stop program
    }

    printf("Is the cup size double? (Y/N): ");
    scanf(" %c", &doubleCup);

    // Switch for Cup Size
    switch (doubleCup) {
        case 'Y':
        case 'y':
            totalTime = totalTime + (totalTime / 2);
            printf("Cup Size: Double (Time increased by 50%%)\n");
            break;
        case 'N':
        case 'n':
            printf("Cup Size: Single\n");
            break;
        default:
            printf("Invalid Input for Cup Size!\n");
            return 0;
    }

    printf("Is the coffee manual? (Y/N): ");
    scanf(" %c", &manual);

    // Switch for Mode
    switch (manual) {
        case 'Y':
        case 'y':
            printf("Mode: Manual\n");
            break;
        case 'N':
        case 'n':
            printf("Mode: Automatic\n");
            break;
        default:
            printf("Invalid Input for Mode!\n");
            return 0;
    }

    printf("Total Coffee Preparation Time: %d mins\n", totalTime);
    printf("Coffee is ready! ?\n");

    return 0;
}

