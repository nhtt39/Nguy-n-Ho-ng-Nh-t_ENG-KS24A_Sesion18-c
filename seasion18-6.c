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

    struct Student new_student;

    printf("Enter information for the new student:\n");

    new_student.id = current_count + 1;

    printf("Enter name: ");
    fgets(new_student.name, sizeof(new_student.name), stdin);

    printf("Enter age: ");
    scanf("%d", &new_student.age);

    printf("Enter phone number: ");
    fgets(new_student.phoneNumber, sizeof(new_student.phoneNumber), stdin);

    students[current_count] = new_student;
    current_count++;

    printf("\nUpdated Student Information:\n");
    for (int i = 0; i < current_count; i++) {
        printf("Student %d:\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

