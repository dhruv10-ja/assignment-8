# assignment-8
include <stdio.h>

int main() {
    float marks[5];
    float total = 0, percentage;
    int i, isPass = 1; 

    printf("Enter marks for 5 courses (out of 100):\n");

    for(i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%f", &marks[i]);
        
        
        if(marks[i] < 40) {
            isPass = 0;
        }
        total += marks[i];
    }

    printf("\n--- Result ---\n");

    if (isPass) {
        percentage = (total / 500) * 100;
        printf("Status: PASS\n");
        printf("Aggregate Percentage: %.2f%%\n", percentage);

        
        if (percentage >= 75) {
            printf("Grade: Distinction\n");
        } else if (percentage >= 60) {
            printf("Grade: First Division\n");
        } else if (percentage >= 50) {
            printf("Grade: Second Division\n");
        } else {
            printf("Grade: Third Division\n");
        }
    } else {
        printf("Status: FAIL\n");
        printf("Reason: Scored less than 40 in one or more courses.\n");
    }

    return 0;
}
