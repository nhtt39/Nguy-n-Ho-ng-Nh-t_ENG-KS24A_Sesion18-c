#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;

    printf("Enter name: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter age: ");
    scanf("%d", &student1.age);

    printf("Enter phone number: ");
    fgets(student1.phoneNumber, sizeof(student1.phoneNumber), stdin);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}

