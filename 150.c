#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;        // normal structure variable
    struct Student *ptr;     // pointer to structure

    ptr = &s;                // assign address of structure to pointer

    // Modify data using -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display data using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
