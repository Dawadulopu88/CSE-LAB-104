# include <stdio.h>
# include <string.h>

// Define a struct to represent a person
struct Person {
    char first_name[50];
    char last_name[50];
    int age;
};

int main() {
    // Create instances of the Person struct
    struct Person person1;
    struct Person person2;

    // Populate the data for person1
    strcpy(person1.first_name, "John");
    strcpy(person1.last_name, "Doe");
    person1.age = 30;

    // Populate the data for person2
    strcpy(person2.first_name, "Alice");
    strcpy(person2.last_name, "Smith");
    person2.age = 25;

    // Print information about the people
    printf("Person 1:\n");
    printf("First Name: %s\n", person1.first_name);
    printf("Last Name: %s\n", person1.last_name);
    printf("Age: %d\n", person1.age);

    printf("\nPerson 2:\n");
    printf("First Name: %s\n", person2.first_name);
    printf("Last Name: %s\n", person2.last_name);
    printf("Age: %d\n", person2.age);

    return 0;
}
