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

    int current_count = 5; 
    char name_to_delete[50];
    int found = 0; 

    printf("Enter the name of the student to delete: ");
    fgets(name_to_delete, sizeof(name_to_delete), stdin);

    for (int i = 0; i < current_count; i++) {
        if (strcmp(students[i].name, name_to_delete) == 0) {
            found = 1;

            for (int j = i; j < current_count - 1; j++) {
                students[j] = students[j + 1];
            }

            current_count--;

            printf("Student %s has been deleted.\n", name_to_delete);
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name_to_delete);
    }

    printf("\nUpdated Student Information:\n");
    for (int i = 0; i < current_count; i++) {
        printf("Student %d:\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

