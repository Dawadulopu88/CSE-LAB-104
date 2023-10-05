# include <stdio.h>
# include <string.h>

// Define a struct to represent a product
struct Product {
    int id;
    char name[100];
    double price;
    int quantity;
};

// Function to display product details
void displayProduct(struct Product product) {
    printf("Product ID: %d\n", product.id);
    printf("Product Name: %s\n", product.name);
    printf("Price: $%.2f\n", product.price);
    printf("Quantity Available: %d\n", product.quantity);
    printf("\n");
}

int main() {
    // Create an array of Product structs to represent the store's inventory
    struct Product inventory[10];
    int productCount = 0;

    int choice;

    while (1) {
        printf("Welcome to Our Online Store!\n");
        printf("----------------------------\n");
        printf("1. Add Product\n");
        printf("2. Update Product\n");
        printf("3. Delete Product\n");
        printf("4. Display Products\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Add Product
            if (productCount < 10) {
                printf("Enter Product ID: ");
                scanf("%d", &inventory[productCount].id);
                printf("Enter Product Name: ");
                scanf("%s", inventory[productCount].name);
                printf("Enter Price: ");
                scanf("%lf", &inventory[productCount].price);
                printf("Enter Quantity: ");
                scanf("%d", &inventory[productCount].quantity);
                productCount++;
            } else {
                printf("Inventory is full. Cannot add more products.\n");
            }
        } else if (choice == 2) {
            // Update Product
            printf("Enter Product ID to update: ");
            int updateID;
            scanf("%d", &updateID);
            int found = 0;
            int i;
            for ( i = 0; i < productCount; i++) {
                if (inventory[i].id == updateID) {
                    printf("Enter New Price: ");
                    scanf("%lf", &inventory[i].price);
                    printf("Enter New Quantity: ");
                    scanf("%d", &inventory[i].quantity);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Product not found.\n");
            }
        } else if (choice == 3) {
            // Delete Product
            printf("Enter Product ID to delete: ");
            int deleteID;
            scanf("%d", &deleteID);
            int deleteIndex = -1;
            int i;
            for ( i = 0; i < productCount; i++) {
                if (inventory[i].id == deleteID) {
                    deleteIndex = i;
                    break;
                }
            }
            if (deleteIndex != -1) {
                    int i;
                for ( i = deleteIndex; i < productCount - 1; i++) {
                    inventory[i] = inventory[i + 1];
                }
                productCount--;
                printf("Product deleted.\n");
            } else {
                printf("Product not found.\n");
            }
        } else if (choice == 4) {
            // Display Products
            printf("Products in Inventory:\n");
            int i;
            for ( i = 0; i < productCount; i++) {
                printf("Product %d:\n", i + 1);
                displayProduct(inventory[i]);
            }
        } else if (choice == 5) {
            // Exit
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
