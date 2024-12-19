#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Nguyen Thi Lan", 22, "0123456789"},
        {2, "Tran Minh Tuan", 21, "0987654321"},
        {3, "Le Thi Mai", 20, "0912345678"},
        {4, "Pham Quang Hieu", 23, "0901234567"},
        {5, "Vu Thi Bich", 19, "0981122334"}
    };

    int id_to_find;
    int found = 0; 

    printf("Enter student ID to search and edit: ");
    scanf("%d", &id_to_find);

    for (int i = 0; i < 5; i++) {
        if (students[i].id == id_to_find) {
            found = 1;
            printf("Found student: \n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Phone Number: %s\n", students[i].phoneNumber);

            printf("\nEnter new name: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);

            printf("Enter new age: ");
            scanf("%d", &students[i].age);

            printf("\nStudent information updated.\n");
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", id_to_find);
    }

    printf("\nUpdated Student Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

