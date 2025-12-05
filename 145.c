#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to return the student with highest marks
struct Student findTopStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex]; // return structure
}

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

    // Get top student
    struct Student top = findTopStudent(s, 5);

    // Output
    printf("---- Top Student ----\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
