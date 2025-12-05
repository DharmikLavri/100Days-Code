#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Find student with highest marks
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Output highest marks student
    printf("---- Student with Highest Marks ----\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll No: %d\n", s[maxIndex].roll_no);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
