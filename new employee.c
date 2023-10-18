#include<stdio.h>

#define MAX_EMPLOYEES 50
struct Employee
{
    int id;
    char name[50];
    int salary;

};

void addEmployee(struct Employee employee[], int *employeenum)
{
    if (*employeenum >= 50)
    {
        printf("The database is full");
        return;
    }
    printf("Enter ID: ");
    scanf("%d",&employee[*employeenum].id);
    printf("Enter Name: ");
    scanf("%s",employee[*employeenum].name);
    printf("Enter Salary: ");
    scanf("%d",&employee[*employeenum].salary);

    (*employeenum)++;
    printf("Employee added successfully!\n");
}

void displayEmployee(struct Employee employee[],int employeenum)
{
    printf("Employee details: \n");
    int i;
    for(i=0; i < employeenum; i++)
    {
        printf("ID: %d\n",employee[i].id);
        printf("Name: %s\n",employee[i].name);
        printf("Salary: %d\n",employee[i].salary);
    }
}

void searchEmployeeByID(struct Employee employee[],int employeenum,int targetID)
{
    int found=0;
    for (int i=0; i<employeenum; i++)
    {
        if (employee[i].id==targetID)
        {
            printf("Employee Details:\n");
            printf("ID: %d\n",employee[i].id);
            printf("Name: %s\n",employee[i].name);
            printf("Salary: %d\n",employee[i].salary);
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("Employee not found with ID %d.\n",targetID);
    }
}
void searchEmployeeByName(struct Employee employee[],int employeenum,char targetName[])
{
    int found=0;
    for (int i=0; i<employeenum; i++)
    {
        if (strcmp(employee[i].name,targetName)==0 )
        {
            printf("Employee Details:\n");
            printf("ID: %d\n", employee[i].id);
            printf("First Name: %s\n", employee[i].name);
            printf("Salary: %d\n", employee[i].salary);
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("Employee not found with the name %s%s.\n",targetName);
    }
}
void deleteEmployee(struct Employee employee[], int *employeenum, int id)
{
    int index = 0;

    // Search for the employee with the given ID
    for (int i = 0; i < *employeenum; i++)
    {
        if (employee[i].id == id)
        {
            index = i; // Store the index of the matching employee
            break;
        }
    }

    if (index == 0)
    {
        printf("Employee with ID %d not found in the database.\n", id);
    }
    else
    {
        for (int i = index; i < *employeenum - 1; i++)
        {
            employee[i] = employee[i + 1];
        }
        (*employeenum)--;
        printf("Employee with ID %d has been deleted.\n");
    }
}

int main()
{
    struct Employee employee[MAX_EMPLOYEES];
    int employeenum = 0;
    int choice;
    do
    {
        printf("Employee Database Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Search Employee by Name\n");
        printf("5. Delete Employee by ID\n");
        printf("6. Exit\n");

        printf("Please enter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            addEmployee(employee,&employeenum);
            printf("\n");
        }
        else if(choice==2)
        {
            displayEmployee(employee,employeenum);
            printf("\n");
        }
        else if(choice==3)
        {
            printf("Enter Employee ID to search for: ");
            int targetID;
            scanf("%d",&targetID);
            searchEmployeeByID(employee,employeenum,targetID);
            printf("\n");
        }
        else if(choice==4)
        {
            char targetName[50];
            printf("Enter Name to search for: ");
            scanf("%s",targetName);
            searchEmployeeByName(employee,employeenum,targetName);
            printf("\n");
        }
        else if(choice==5)
        {
            printf("Enter Employee ID to search for delete: ");
            int id;
            scanf("%d",&id);
            deleteEmployee(employee,&employeenum,id);
            printf("\n");
        }
        else if(choice==6)
        {
            printf("Exiting the program. Goodbye!\n");
            printf("\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
            printf("\n");
        }

    }
    while (choice!= 5);

    return 0;
}
