# include <stdio.h>
# include <string.h>
typedef struct Book book;

struct Book
{
    char name[50];
    int price;
};

int main()
{

    book book1;
    book book2;

    scanf("%s",&book1.name);
    scanf("%d",&book1.price);


    scanf("%s",&book2.name);
    scanf("%d",&book2.price);

    printf("Book 1:\n");
    printf("Name: %s\n", book1.name);
    printf("Price: %d\n", book1.price);

    printf("\nBook 2:\n");
    printf("Name: %s\n", book2.name);
    printf("Price: %d\n", book2.price);

    return 0;
}

