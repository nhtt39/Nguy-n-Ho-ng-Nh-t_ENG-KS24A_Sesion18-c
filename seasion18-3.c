#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter information for student %d:\n", i + 1);

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
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

