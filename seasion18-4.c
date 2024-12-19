#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];

    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1;

        printf("Enter information for student %d:\n", students[i].id);

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter phone number: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);

        printf("\n");
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

