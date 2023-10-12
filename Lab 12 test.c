#include<stdio.h>
struct Student {
  char* name;
  int id;
  int age;
};
int main(){
struct Student student1;
student1.name = "Opu";
student1.id = 22201088;
student1.age = 22;

struct Student student2;
student2.name = "Nisa";
student2.id = 22201086;
student2.age = 18;

printf("Student 1:\n");
printf("Name: %s\n", student1.name);
printf("ID: %d\n", student1.id);
printf("Age: %d\n", student1.age);

printf("\nStudent 2:\n");
printf("Name: %s\n", student2.name);
printf("ID: %d\n", student2.id);
printf("Age: %d\n", student2.age);
return 0;
}
