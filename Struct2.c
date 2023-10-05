# include <stdio.h>
# include <string.h>


struct Book {
    char name[50];
    int price;
};

int main() {

    struct Book book1;
    struct Book book2;

    strcpy(book1.name, "Gitanjoli");
    book1.price = 300;

    strcpy(book2.name, "Moyurponkhi");
    book2.price = 250;

    printf("Book 1:\n");
    printf("Name: %s\n", book1.name);
    printf("Price: %d\n", book1.price);

    printf("\nBook 2:\n");
    printf("Name: %s\n", book2.name);
    printf("Price: %d\n", book2.price);

    return 0;
}
