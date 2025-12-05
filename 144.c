#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts a structure and prints its members
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Details ---\n");
    printStudent(s1);   // Passing structure to function

    return 0;
}
