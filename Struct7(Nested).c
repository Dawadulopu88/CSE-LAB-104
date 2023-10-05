# include <stdio.h>

// Define a structure for an address
struct Display
{
    char refresh_rate[100];
    char resulation[50];
    char size[20];
};


struct Mobile
{
    char name[100];
    int price;
    struct Display display;
};

    int main()
    {

        struct Mobile mobile1;


        strcpy(mobile1.name, "Iphone");
        mobile1.price= 130000;


        strcpy(mobile1.display.refresh_rate, "120Hz");
        strcpy(mobile1.display.resulation, "1200X1900");
        strcpy(mobile1.display.size, "6.67inch");

        printf("Name: %s\n", mobile1.name);
        printf("Price: %d\n", mobile1.price);
        printf("Display:\n");
        printf("  Refresh Rate: %s\n", mobile1.display.refresh_rate);
        printf("  Resulation: %s\n", mobile1.display.resulation);
        printf("  Size: %s\n", mobile1.display.size);

        return 0;
    }
